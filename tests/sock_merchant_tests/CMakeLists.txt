cmake_minimum_required(VERSION 3.13)
project(sock_merchant_tests)

add_executable(sock_merchant_check sock_merchant_check.cpp )

target_link_libraries(sock_merchant_check gtest gtest_main sock_merchant)