//
// Created by Charles Haynes on 2018-12-23.
//

#ifndef HACKERRANKPROBLEMS_SOCKMERCHANT_HPP
#define HACKERRANKPROBLEMS_SOCKMERCHANT_HPP

#include <vector>

class SockMerchant {
public:
    SockMerchant(const std::vector<int> &socks);
    auto TotalPairsOfSocks() ->int ;

private:
    std::vector<int> socks;
};


#endif //HACKERRANKPROBLEMS_SOCKMERCHANT_HPP
