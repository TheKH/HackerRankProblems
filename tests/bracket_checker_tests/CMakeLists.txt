cmake_minimum_required(VERSION 3.13)
project(bracket_checker_tests)

add_executable(bracket_checker_tests ../bracket_checker_tests/bracket_checker_tests.cpp)

target_link_libraries(bracket_checker_tests gtest gtest_main bracket_checker)