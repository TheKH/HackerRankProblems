//
// Created by Charles Haynes on 2018-12-23.
//

#include "gtest/gtest.h"
#include "bracket_checker/bracket_checker.hpp"

TEST(bracket_checker_test, test1) {
    auto given_string = "([])[]({})";
    auto bc = BracketChecker(given_string);
    auto string_balanced = bc.IsBalanced();
    EXPECT_EQ(true, string_balanced);
}
