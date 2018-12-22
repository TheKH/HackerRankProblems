#include <iostream>
#include "title_capitalization/title_capitalization.h"

int main() {
    TitleCapitalization title_converter;
    auto results = title_converter.ConvertToUpStyle("i love solving problems and its fun");
    std::cout << "Hello, World!" << std::endl;
    std::cout << results << std::endl;
    return 0;
}