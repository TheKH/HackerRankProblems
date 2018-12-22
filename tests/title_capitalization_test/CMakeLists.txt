cmake_minimum_required(VERSION 3.13)
project(title_capitalization_tests)

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)

include_directories(${gtest_SOURCE_DIR}include ${gtest_SOURCE_DIR})

add_executable(runbasic_check title_capitalization_check.cpp )

target_link_libraries(runbasic_check gtest gtest_main title)