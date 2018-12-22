//
// Created by Charles Haynes on 2018-12-22.
//

#include "title_capitalization/title_capitalization.h"
#include <sstream>

std::string TitleCapitalization::ConvertToUpStyle(std::string title) {

    std::string up_style_title{};
    auto words = BreakTitleUp(title);

    auto first_word = Capitalize(words.front());
    auto last_word = Capitalize(words.back());
    up_style_title += first_word + " ";

    for(auto word = words.begin() + 1; word != --words.end() ; word++) {
        *word = LowerCase(*word);
        if(!isWordInList(*word)) {
            *word = Capitalize(*word);
        }
        up_style_title += *word + " ";
    }

    up_style_title += last_word;
    return up_style_title;
}

std::string TitleCapitalization::LowerCase(std::string word) {
    for(auto & character : word) {
        character = tolower(character);
    }
    return word;
}

std::string TitleCapitalization::Capitalize(std::string word) {
    word = LowerCase(word);
    word.front() = toupper(word.front());
    return word;
}

std::vector<std::string> TitleCapitalization::BreakTitleUp(std::string title) {
    std::stringstream sentence(title);
    std::string word {};
    std::vector<std::string> vector_of_strings;
    while(sentence >> word) {
        vector_of_strings.push_back(word);
    }
    return vector_of_strings;
}

bool TitleCapitalization::isWordInList(std::string word) {
    static const std::vector<std::string> words_not_to_capitalize{"a","the","to","at","in","with", "but","or"};

    for(const auto & word_not_to_capitalize : words_not_to_capitalize) {
        if(word_not_to_capitalize == word) {
            return true;
        }
    }
    return false;
}
