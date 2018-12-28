//
// Created by Charles Haynes on 2018-12-23.
//

#include "gtest/gtest.h"


int CountingValleys(int total_steps, std::string path) {

    int altitude = 0;
    unsigned total_valleys = 0;
    for(const auto step : path ) {
        if(step == 'D' ) {
            altitude--;
        } else {
            altitude++;
            if(altitude == 0) {total_valleys++;}
        }
    }
    return total_valleys;
}


TEST(counting_valleys_test, test1) {
    auto garys_path = "DDUUUUDD";
    auto total_valleys = CountingValleys(8,garys_path);
    EXPECT_EQ(1, total_valleys);
}

TEST(title_test, test2) {

    auto garys_path = "UDDDUDUU";
    auto total_valleys = CountingValleys(8,garys_path);
    EXPECT_EQ(1, total_valleys);

}