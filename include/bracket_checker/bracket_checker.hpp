//
// Created by Charles Haynes on 2019-02-28.
//

#ifndef HACKERRANKPROBLEMS_BRACKET_CHECKER_HPP
#define HACKERRANKPROBLEMS_BRACKET_CHECKER_HPP

#include <string>

class BracketChecker {

public:
    BracketChecker(const std::string& bracket_string );

    bool IsBalanced();

private:
    std::string _bracket_string;

};


#endif //HACKERRANKPROBLEMS_BRACKET_CHECKER_HPP
