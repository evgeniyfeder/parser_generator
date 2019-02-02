#include <fstream>
#include <iostream>
#include <regex>

#include "antlr4-runtime.h"
#include "input_grammar/GrammaticSchemeLexer.h"
#include "input_grammar/GrammaticSchemeParser.h"
int main() {
   std::ifstream in_file;
   in_file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
   in_file.open("task2.txt");

   antlr4::ANTLRInputStream input(in_file);
   GrammaticSchemeLexer lexer(&input);
   antlr4::CommonTokenStream tokens(&lexer);
   GrammaticSchemeParser parser(&tokens);
   grammatic_t g = parser.grammatic()->g;
   g.finish();
   return 0;
}
