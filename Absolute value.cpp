#include <iostream>
#include <cstdlib> 
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    int absolute_value = std::abs(number);
    std::cout << "The absolute value of " << number << " is " << absolute_value << std::endl;
    return 0;
}
