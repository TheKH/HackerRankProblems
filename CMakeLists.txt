cmake_minimum_required(VERSION 3.13)
project(HackerRankProblems)

set(CMAKE_CXX_STANDARD 14)

if (APPLE)
    add_definitions(-DGTEST_USE_OWN_TR1_TUPLE)
    add_definitions(-D__GLIBCXX__)
endif (APPLE)


include_directories(include ${gtest_SOURCE_DIR}include ${gtest_SOURCE_DIR})


add_subdirectory(tests)
add_subdirectory(extern/googletest)

add_library(title STATIC src/title_capitalization/title_capitalization.cpp)
target_include_directories(title PUBLIC)

add_library(sock_merchant src/sock_merchant/sock_merchant.cpp)
target_include_directories(sock_merchant PUBLIC)

add_library(bracket_checker src/bracket_checker/bracket_checker.cpp)
target_include_directories(bracket_checker PUBLIC)

#The main application
add_executable(prog src/main.cpp)
target_link_libraries(prog PRIVATE title)


