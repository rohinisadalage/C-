#include <iostream>
int main() {
    int num1, num2, result;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    result = num1 - num2;
    std::cout << "The result of " << num1 << " - " << num2 << " is: " << result << std::endl;
    return 0;
}
