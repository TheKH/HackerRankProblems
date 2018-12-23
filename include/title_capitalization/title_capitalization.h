//
// Created by Charles Haynes on 2018-12-22.
//

#ifndef HACKERRANKPROBLEMS_TITLECAPITALIZATION_H
#define HACKERRANKPROBLEMS_TITLECAPITALIZATION_H

#include <string>
#include <vector>


class TitleCapitalization {
public:
    TitleCapitalization() = default;
    std::string ConvertToUpStyle(std::string);

private:
    std::string LowerCase(std::string word);
    std::string Capitalize(std::string word);
    std::vector<std::string> BreakTitleUp(std::string);
    bool IsWordInListNotToCapitalize(std::string word);
    std::string _title;
};

#endif //HACKERRANKPROBLEMS_TITLECAPITALIZATION_H
