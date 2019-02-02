#include <fstream>

#include "grammatic.h"

namespace fs = std::filesystem;

grammatic_t::grammatic_t(const std::string & start) : start(start) {

}

grammatic_t &grammatic_t::add_term(const term_t & term, bool skip) {
   terms.insert({term.name, std::make_shared<term_t>(term)});
   if (skip)
      skips.insert(term.name);
   return *this;
}

grammatic_t &grammatic_t::add_non_term(non_term_t && non_term) {
   auto ptr = std::make_shared<non_term_t>(std::move(non_term));
   non_terms.insert({ptr.get()->name, ptr});
   return *this;
}

grammatic_t &grammatic_t::set_header(const std::string & header) {
   this->header = header;
   return *this;
}

grammatic_t &grammatic_t::set_start(const std::string & start) {
   this->start = start;
   return *this;
}

void grammatic_t::finish(fs::path const & directory) {
  fs::create_directories(directory);

   count_first();
   count_follow();

   generate_lexer(directory);
   generate_parser(directory);
}

void grammatic_t::count_first() {
   bool is_change = true;
   while (is_change) {
      is_change = false;

      for (auto && non_term : non_terms) {
         std::string & left = non_term.second->name;

         for (auto && rule : non_term.second->rules) {
            auto ft = get_first_terms(rule, 0);

            std::size_t old_size = first[left].size();
            first[left].insert(ft.begin(), ft.end());
            is_change |= (old_size != first[left].size());
         }
      }
   }
}

std::unordered_set<std::string> grammatic_t::get_first_terms(const rule_t & rule, size_t index) {
   if (index < rule.size() && rule[index].name == "@code") {
      return get_first_terms(rule, index + 1);
   } if ((index < rule.size() && rule[index].name == "@eps")) {
      return { "@eps" };
   } else if (index == rule.size()) {
      return { "@end" };
   } else if (isupper(rule[index].name[0])) {
      return { rule[index].name };
   } else {
      auto fi = first[rule[index].name];

      if (fi.find("@eps") != fi.end()) {
         fi.erase("@eps");
         auto fn = get_first_terms(rule, index + 1);
         fi.insert(fn.begin(), fn.end());
      }
      return fi;
   }
}

void grammatic_t::count_follow() {
   follow[start].insert("@end");
   bool is_change = true;

   while (is_change) {
      is_change = false;
      for (auto && non_term : non_terms) {
         std::string & left = non_term.second->name;

         for (auto && rule : non_term.second->rules) {
            for (std::size_t i = 0; i < rule.size(); i++) {
               if (rule[i].name == "@eps" || rule[i].name == "@code" || std::isupper(rule[i].name[0]))
                  continue;

               auto fi = get_first_terms(rule, i + 1);
               std::size_t size = follow[rule[i].name].size();

               if (fi.find("@eps") != fi.end() || fi.find("@end") != fi.end()) {
                  fi.erase("@eps");
                  follow[rule[i].name].insert(follow[left].begin(), follow[left].end());
               }

               follow[rule[i].name].insert(fi.begin(), fi.end());
               is_change |= (size != follow[rule[i].name].size());
            }
         }
      }
   }
}

void grammatic_t::generate_lexer(const std::filesystem::path & directory) {
   std::string lclass_name = (start + "_lexer");

   std::ofstream h_file(directory / (lclass_name + ".h"));

   h_file << "#pragma once\n"
          << "#include <string>\n"
          << "#include <unordered_set>\n"
          << "#include <regex>\n"
          << header
          << "enum Token {\n"
          << "   ";

   for (auto && term : terms) {
      h_file << term.second->name << ", ";
   }
   h_file << "END\n"
          << "};\n"
          << "class " << lclass_name << " {\n"
          << "public:\n"
          << "   " << lclass_name << "();\n"
          << "   void update_input(std::string const & input);\n"
          << "   void next_token();\n"
          << "   Token get_cur_token();\n"
          << "   std::string get_cur_token_string();\n"
             "   std::size_t get_cur_pos();\n"
             ""
          << "private:\n"
          << "   Token cur_token;\n"
          << "   std::string cur_token_str;\n"
          << "   std::size_t cur_pos;\n"
          << "   std::string input;\n"
          << "   \n"
          << "   std::unordered_set<Token> skips;\n"
          << "   std::array<std::regex, " << terms.size() << "> token_regexps;\n"
          << "   static const int token_num = " << terms.size() << ";\n"
          << "};";

   std::ofstream cpp_file(directory / (lclass_name + ".cpp"));
   cpp_file << "#include <stdexcept>\n";
   cpp_file << "#include \"" << lclass_name + ".h" << "\"\n"
            << "\n"
            << lclass_name << "::" << lclass_name << "() : cur_pos(0) {\n";

   if (skips.size() > 0) {
      cpp_file << "   skips = { ";

      for (auto it = skips.begin(); it != skips.end(); ++it) {
         auto copy = it;
         if (++copy == skips.end()) {
            cpp_file << *it << " };\n\n";
         } else {
            cpp_file << *it << ", ";
         }
      }
   }

   for (auto && term : terms) {
      cpp_file << "   token_regexps[" << term.second->name /* work because of enum */ << "] = std::regex(\"^" /* add ^ for matching from begin of string */ << term.second->regexp << "\");\n";
   }

   cpp_file << "}\n"
               "\n"
               "void " << lclass_name << "::update_input(std::string const &input) {\n"
               "   this->input = input;\n"
               "   this->cur_pos = 0;\n"
               "   next_token();\n"
               "}\n"
            << "\n"
            << "void " << lclass_name << "::next_token() {\n"
            << "   if (input[cur_pos] == '$' && cur_pos == input.size() - 1) {\n"
            << "      cur_token = END;\n"
            << "      return;\n"
            << "   }\n"
            << "   \n"
            << "   std::smatch m;\n"
               "   \n"
            << "   for (std::size_t i = 0; i < token_num; i++) {\n"
               "      if (std::regex_search(input.cbegin() + cur_pos, input.cend(), m, token_regexps[i])) {\n"
               "         cur_pos += m.str().size();\n"
               "         cur_token = static_cast<Token>(i);\n"
               "         cur_token_str = m.str();\n"
               "         \n"
               "         if (skips.find(cur_token) != skips.end()) {\n"
               "            next_token();\n"
               "         }\n"
               "         return;\n"
               "      }\n"
               "   }\n"
               "   throw std::runtime_error(std::string(\"Unexpected symbol \'\") + input[cur_pos] +  \"\' at position \" + std::to_string(cur_pos + 1));\n"
               "}\n"
               "\n"
            << "Token " << lclass_name + "::get_cur_token() { return cur_token; }\n"
            << "std::string " << lclass_name + "::get_cur_token_string() { return cur_token_str; }\n"
            << "std::size_t " << lclass_name + "::get_cur_pos() { return cur_pos; }\n";
}

void grammatic_t::generate_parser(const std::filesystem::path & directory) {
   /* Copy tree realization */
   fs::copy(fs::path("parser_generator/tree.h"), directory / ("tree.h"), fs::copy_options::overwrite_existing);
   fs::copy(fs::path("parser_generator/tree.cpp"), directory / ("tree.cpp"), fs::copy_options::overwrite_existing);

   std::string pclass_name = (start + "_parser");
   std::string lclass_name = (start + "_lexer");

   std::ofstream h_file(directory / (pclass_name + ".h"));

   h_file << "#pragma once\n"
             "#include \"" << lclass_name + ".h" << "\"\n"
             "#include \"tree.h\"\n"
          << header
          << "class " << pclass_name << " {\n"
             "public:\n";

   for (auto && nterm : non_terms) {
      h_file << "   result_t<" + nterm.second->returns + "> " << nterm.first << "(" << nterm.second->args << ");\n";
   }
   h_file << "   void update_input(std::string const & str);\n";
   h_file << "   result_t<" + non_terms[start]->returns + "> parse();\n";

   h_file << "private:\n"
             "   " << lclass_name << " lexer;\n};\n";

   std::ofstream cpp_file(directory / (pclass_name + ".cpp"));

   cpp_file << "#include <stdexcept>\n";
   cpp_file << "#include \"" + pclass_name + ".h\"\n"
               "void " + pclass_name + "::update_input(std::string const & str) { lexer.update_input(str + '$'); }\n"



               "result_t<" + non_terms[start]->returns + "> " + pclass_name + "::parse() {\n"
               "   auto res = " + start + "();\n"
               "   if (lexer.get_cur_token() != END) {\n"
               "      throw std::runtime_error(\"Unexpected end of input\");\n"
               "   }\n"
               "   return res;\n"
               "}\n\n";

   /* Generate term functions */
   for (auto && nterm : non_terms) {
      std::string result_type = "result_t<" + nterm.second->returns + "> ";
      cpp_file << result_type << pclass_name << "::" + nterm.first << "(" << nterm.second->args << ") {\n"
                  "   Token curToken = lexer.get_cur_token();\n"
                  "   " + result_type + " res;\n"
                  "   " + nterm.second->returns + " $out;\n"
                  "   res.node = node_ptr(new node_t(\"" + nterm.first + "\"));\n"
                  "\n"
                  "   switch (curToken) {\n   // first\n";
      bool need_follow = false;
      for (auto && term : first[nterm.first]) {
         if (term == "@eps") {
            need_follow = true;
            continue;
         }

         cpp_file << "   case " + term + ":\n   {\n";

         int32_t rule = find_rule(term, nterm.second);
         print_rule(nterm.second->rules[rule], cpp_file);
         cpp_file << "      break;\n";
         cpp_file << "   }\n";
      }
      if (need_follow) {
         for (auto && term : follow[nterm.first]) {
            if (term == "@end")
               cpp_file << "   case END:\n";
            else
               cpp_file << "   case " + term + ":\n";
         }
         cpp_file << "   {\n";
         int32_t rule = find_rule("@eps", nterm.second);
         print_rule(nterm.second->rules[rule], cpp_file);
         cpp_file << "      break;\n";
         cpp_file << "   }\n";
      }
      cpp_file << "   default:\n";
      cpp_file << "      throw std::runtime_error(std::string(\"Unexpected token \'\") + lexer.get_cur_token_string() + \" at position \" + std::to_string(lexer.get_cur_pos()));\n";

      cpp_file << "   }\n";
      cpp_file << "   res.out = $out;\n"
                  "   return res;\n"
                  "}\n\n";
   }
}

int32_t grammatic_t::find_rule(const std::string & first_name, non_term_ptr const & nterm)
{
   int32_t rule = -1;
   int32_t rules_size = static_cast<int32_t>(nterm->rules.size());
   for (int32_t i = 0; i < rules_size; i++) {
      if (std::islower(nterm->rules[i][0].name[0])) {
         auto &f = first[nterm->rules[i][0].name];
         if (f.find(first_name) != f.end()) {
            if (rule != -1) {
               throw std::runtime_error("Not LL1 grammatic");
            }
            rule = i;
         }
      } else {
         if (first_name == nterm->rules[i][0].name) {
            if (rule != -1) {
               throw std::runtime_error("Not LL1 grammatic");
            }
            rule = i;
         }
      }
   }
   return rule;
}

void grammatic_t::print_rule(const rule_t & rule, std::ofstream & cpp_file) {
   for (auto && right_part : rule) {
      if (right_part.name == "@code") {
         cpp_file << "      " << right_part.code << "\n";
      } else if (right_part.name == "@eps") {
         cpp_file << "      res.node->add_child(node_ptr(new node_t(\"@eps\")));\n";
      } else if (std::islower(right_part.name[0])) {
         cpp_file << "      auto $" << right_part.name << "= " << right_part.name << "(" << right_part.code << ");\n";
         cpp_file << "      res.node->add_child($" << right_part.name << ".node);\n";
      } else {
         cpp_file << "      result_t<std::string> $" << right_part.name << ";\n";
         cpp_file << "      $" << right_part.name << ".node = node_ptr(new node_t(lexer.get_cur_token_string()));\n"
                  << "      $" << right_part.name << ".out = lexer.get_cur_token_string();\n"
                  << "      lexer.next_token();\n"
                     "      res.node->add_child($" << right_part.name << ".node);\n";
      }
   }
}
