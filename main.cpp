#include <iostream>
#include "antlr4-runtime.h"
#include "antlr/GrammaticSchemeLexer.h"
#include "antlr/GrammaticSchemeParser.h"
#include "antlr/GrammaticSchemeBaseListener.h"

int main() {
   std::ifstream in_file("sample.txt");

   antlr4::ANTLRInputStream input(in_file);
   GrammaticSchemeLexer lexer(&input);
   antlr4::CommonTokenStream tokens(&lexer);
   GrammaticSchemeParser parser(&tokens);

   antlr4::tree::ParseTree *ptree = parser.grammatic();
   // ...
   return 0;
}
