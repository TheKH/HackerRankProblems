//
// Created by Charles Haynes on 2018-12-23.
//

#include "gtest/gtest.h"
#include <vector>
#include <iterator>
int JumpingOnClouds(std::vector<int> clouds) {

    unsigned total_jumps{};
    for(auto it = clouds.begin(); it != clouds.end();)
    {
        auto minimum_jump = std::next(it);
        auto max_jump = std::next(it,2);
        if(minimum_jump == clouds.end()) { break; }
        it = (*max_jump == 0) ? max_jump : minimum_jump;
        total_jumps++;
    }
    return total_jumps;
}


TEST(jumping_clouds_test, test1) {
    std::vector<int> clouds = {0,1,0,0,0,1,0};
    auto minimum_jumps = JumpingOnClouds(clouds);
    EXPECT_EQ(3, minimum_jumps);
}

TEST(jumping_clouds_test, test2) {

    std::vector<int> clouds = {0,0,1,0,0,1,0};
    auto minimum_jumps = JumpingOnClouds(clouds);
    EXPECT_EQ(4, minimum_jumps);

}