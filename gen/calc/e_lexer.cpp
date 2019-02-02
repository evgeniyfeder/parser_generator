#include <stdexcept>
#include "e_lexer.h"

e_lexer::e_lexer() : cur_pos(0) {
   skips = { WS };

   token_regexps[WS] = std::regex("^[ \t\r\n ]");
   token_regexps[MINUS] = std::regex("^-");
   token_regexps[PLUS] = std::regex("^[+]");
   token_regexps[NUMBER] = std::regex("^[0-9]+");
   token_regexps[MUL] = std::regex("^[*]");
   token_regexps[LP] = std::regex("^[(]");
   token_regexps[RP] = std::regex("^[)]");
   token_regexps[DIV] = std::regex("^/");
}

void e_lexer::update_input(std::string const &input) {
   this->input = input;
   this->cur_pos = 0;
   next_token();
}

void e_lexer::next_token() {
   if (input[cur_pos] == '$' && cur_pos == input.size() - 1) {
      cur_token = END;
      return;
   }
   
   std::smatch m;
   
   for (std::size_t i = 0; i < token_num; i++) {
      if (std::regex_search(input.cbegin() + cur_pos, input.cend(), m, token_regexps[i])) {
         cur_pos += m.str().size();
         cur_token = static_cast<Token>(i);
         cur_token_str = m.str();
         
         if (skips.find(cur_token) != skips.end()) {
            next_token();
         }
         return;
      }
   }
   throw std::runtime_error(std::string("Unexpected symbol '") + input[cur_pos] +  "' at position " + std::to_string(cur_pos + 1));
}

Token e_lexer::get_cur_token() { return cur_token; }
std::string e_lexer::get_cur_token_string() { return cur_token_str; }
std::size_t e_lexer::get_cur_pos() { return cur_pos; }
