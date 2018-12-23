//
// Created by Charles Haynes on 2018-12-23.
//

#include "gtest/gtest.h"
#include "sock_merchant/sock_merchant.hpp"


TEST(sock_merchant_test, test1) {
    std::vector<int> socks{1,2,1,2,3,2};
    SockMerchant sock_merchant(socks);
    auto total_pairs_of_socks = sock_merchant.TotalPairsOfSocks();

    EXPECT_EQ(2, total_pairs_of_socks);
}

TEST(title_test, test2) {

    std::vector<int> socks{10,20,20,10,10,30,50,10,20};
    SockMerchant sock_merchant(socks);
    auto total_pairs_of_socks = sock_merchant.TotalPairsOfSocks();

    EXPECT_EQ(3, total_pairs_of_socks);

}