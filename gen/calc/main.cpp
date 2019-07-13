#include <iostream>
#include "e_parser.h"

int main() {
   e_parser parser;
   parser.update_input("2^3^3");
   // 239-30=209-2^8=209-256=-47
   std::cout << parser.parse().out << std::endl;
}
