#include <iostream>
#include <unordered_map>
#include <string>
void countFrequency(const std::string &str) {
    std::unordered_map<char, int> frequency;
    for (char c : str) {
        frequency[c]++;
    }
    std::cout << "Character Frequency:\n";
    for (const auto &pair : frequency) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}
int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    countFrequency(str);
    return 0;
}
