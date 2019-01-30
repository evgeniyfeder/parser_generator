project(parser_generator)
set(CMAKE_CXX_STANDARD 14)

find_library(ANTLR4_RUNTIME antlr4-runtime)
add_executable(parser_generator main.cpp)
target_link_libraries(parser_generator "${ANTLR4_RUNTIME}")

