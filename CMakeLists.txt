project(parser_generator)
set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/include/antlr4-runtime)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable(parser_generator
    main.cpp
    input_grammar/GrammaticSchemeLexer.cpp
    input_grammar/GrammaticSchemeParser.cpp
    parser_generator/grammatic.cpp
    parser_generator/base.cpp
    parser_generator/term.cpp
    parser_generator/non_term.cpp
    parser_generator/tree.cpp
    )

add_executable(calculator
    gen/calc/e_parser.cpp
    gen/calc/e_lexer.cpp
    gen/calc/tree.cpp
    gen/calc/main.cpp # self-created
    )
target_link_libraries(parser_generator antlr4-runtime stdc++fs)

