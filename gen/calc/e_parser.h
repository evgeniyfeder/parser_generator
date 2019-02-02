#pragma once
#include "e_lexer.h"
#include "tree.h"
class e_parser {
public:
   result_t<int> f();
   result_t<int> ts(int acc);
   result_t<int> t();
   result_t<int> e();
   result_t<int> es(int acc);
   void update_input(std::string const & str);
   result_t<int> parse();
private:
   e_lexer lexer;
};
