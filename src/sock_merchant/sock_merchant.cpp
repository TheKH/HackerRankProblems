//
// Created by Charles Haynes on 2018-12-23.
//

#include "sock_merchant/sock_merchant.hpp"
#include <unordered_map>

SockMerchant::SockMerchant(const std::vector<int> &socks) : socks(socks) {}

auto SockMerchant::TotalPairsOfSocks() -> int {
    //{sock_color,number_of_socks}
    std::unordered_map<int,int> pairs_of_socks;
    unsigned total_pairs = 0;

    for(auto sock : socks) {
        pairs_of_socks[sock]++;
        if(pairs_of_socks[sock] % 2 == 0) {
            total_pairs++;
        }
    }
    return total_pairs;
}
