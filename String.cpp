#include <iostream>
#include <string>
int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    str1 += str2;
    std::cout << "After concatenation: " << str1 << std::endl;
    int length = str1.length();
    std::cout << "Length of str1: " << length << std::endl;
    std::string str3 = str1;
    std::cout << "Copied string (str3): " << str3 << std::endl;
    return 0;
}
