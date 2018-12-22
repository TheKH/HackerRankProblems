cmake_minimum_required(VERSION 3.13)
project(HackerRankProblems)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_subdirectory(tests)
add_subdirectory(extern/googletest)

add_library(title STATIC src/title_capitalization/title_capitalization.cpp)
target_include_directories(title PUBLIC)

#The main application
add_executable(prog src/main.cpp)
target_link_libraries(prog PRIVATE title)


