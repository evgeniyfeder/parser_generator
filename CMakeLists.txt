project(parser_generator)
set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/include/antlr4-runtime)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable(parser_generator
    main.cpp
    antlr/GrammaticSchemeLexer.h
    antlr/GrammaticSchemeLexer.cpp
    antlr/GrammaticSchemeParser.h
    antlr/GrammaticSchemeParser.cpp
    antlr/GrammaticSchemeBaseListener.h)
target_link_libraries(parser_generator antlr4-runtime)

