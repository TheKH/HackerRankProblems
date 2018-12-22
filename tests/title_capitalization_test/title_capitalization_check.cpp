//
// Created by Charles Haynes on 2018-12-22.
//

#include "title_capitalization/title_capitalization.h"
#include "gtest/gtest.h"


TEST(title_test, test1) {

TitleCapitalization title_converter;
auto results = title_converter.ConvertToUpStyle("i love solving problems and its fun");

EXPECT_EQ("I Love Solving Problems And Its Fun", results);

}

TEST(title_test, test2) {

TitleCapitalization title_converter;
auto results = title_converter.ConvertToUpStyle("wHy Does A biRd Fly");

EXPECT_EQ("Why Does a Bird Fly", results);

}