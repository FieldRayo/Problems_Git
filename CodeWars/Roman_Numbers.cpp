#include <iostream>
#include <string>
#include <map>

int main() {
    int number = 21938;
    std::string result("");
    std::map<int, std::string> roman_map = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    for (auto it = roman_map.crbegin(); it != roman_map.crend(); ) {
        std::cout << it->first << " - " << it->second << std::endl;

        if (number >= it->first) {
            number -= it->first;
            result += it->second;
        } else {
            it++;
        }
    }
    std::cout << result;
}
