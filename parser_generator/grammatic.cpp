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

void grammatic_t::finish() {
   fs::path gen_dir = "gen";
   fs::create_directory(gen_dir);

   count_first();
   count_follow();

   generate_lexer(gen_dir);
   generate_parser(gen_dir);
}

void grammatic_t::count_first() {
   bool is_change = true;
   while (is_change) {
      is_change = false;

      for (auto && non_term : non_terms) {
         std::string_view rule_name = non_term.second->name;

         for (auto && rule : non_term.second->rules) {

         }
      }
   }
}

void grammatic_t::count_follow()
{

}

void grammatic_t::generate_parser(const std::filesystem::path & directory)
{

}

void grammatic_t::generate_lexer(const std::filesystem::path & directory)
{

}







