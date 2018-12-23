cmake_minimum_required(VERSION 3.13)
project(title_capitalization_tests)

add_executable(runbasic_check title_capitalization_check.cpp )

target_link_libraries(runbasic_check gtest gtest_main title)