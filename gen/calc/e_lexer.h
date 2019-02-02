#pragma once
#include <string>
#include <unordered_set>
#include <regex>
enum Token {
   WS, MINUS, PLUS, NUMBER, MUL, LP, RP, DIV, END
};
class e_lexer {
public:
   e_lexer();
   void update_input(std::string const & input);
   void next_token();
   Token get_cur_token();
   std::string get_cur_token_string();
   std::size_t get_cur_pos();
private:
   Token cur_token;
   std::string cur_token_str;
   std::size_t cur_pos;
   std::string input;
   
   std::unordered_set<Token> skips;
   std::array<std::regex, 8> token_regexps;
   static const int token_num = 8;
};