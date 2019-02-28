//
// Created by Charles Haynes on 2019-02-28.
//

#include <bracket_checker/bracket_checker.hpp>

BracketChecker::BracketChecker(const std::string &bracket_string) : _bracket_string(bracket_string) {

}

bool BracketChecker::IsBalanced() {

    auto parenthese_cnt = 0;
    auto squiglyCnt = 0;
    auto square_cnt = 0;

    for(auto c : _bracket_string) {
        switch(c) {
            case '{':
                squiglyCnt++;
                break;
            case '}':
                squiglyCnt--;
                break;
            case '[':
                square_cnt++;
                break;
            case ']':
                square_cnt--;
                break;
            case '(':
                parenthese_cnt++;
                break;
            case ')':
                parenthese_cnt--;
                break;
        }
    }

    return parenthese_cnt == 0 && squiglyCnt == 0 && square_cnt == 0;
}


