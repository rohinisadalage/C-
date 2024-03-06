#include <iostream>
#include <string>

int main() {
    int number;
    
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::string numberString = std::to_string(number);
    std::cout << "Length of the number string: " << numberString.length() << std::endl;

    return 0;
}
