#include <iostream>
#include <string>
int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int length = str.length();
    std::cout << "The length of the string is: " << length << std::endl;
    return 0;
}
