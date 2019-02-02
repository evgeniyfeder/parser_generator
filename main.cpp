#include <fstream>
#include <iostream>
#include <regex>

#include "antlr4-runtime.h"
#include "input_grammar/GrammaticSchemeLexer.h"
#include "input_grammar/GrammaticSchemeParser.h"
int main(int argc, char * argv[]) {
   if (argc < 3) {
      std::cout << "Usage: <grammar_file> <directory_to_out>" << std::endl;
   }

   std::ifstream in_file;
   in_file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
   in_file.open(argv[1]);

   antlr4::ANTLRInputStream input(in_file);
   GrammaticSchemeLexer lexer(&input);
   antlr4::CommonTokenStream tokens(&lexer);
   GrammaticSchemeParser parser(&tokens);
   grammatic_t g = parser.grammatic()->g;
   g.finish(std::filesystem::path(argv[2]));
   return 0;
}
