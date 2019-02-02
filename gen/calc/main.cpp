#include <iostream>
#include "e_parser.h"

int main() {
   e_parser parser;
   parser.update_input("239-30-(30 + 5 * 5 / 5)");
   std::cout << parser.parse().out << std::endl;
}
