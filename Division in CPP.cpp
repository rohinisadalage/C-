#include <iostream>
int main() {
    double num1, num2, result;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    if (num2 == 0) {
        std::cerr << "Error! Division by zero is not allowed." << std::endl;
    } else {
        result = num1 / num2;
        std::cout << "Result of " << num1 << " / " << num2 << " = " << result << std::endl;
    }
    return 0;
}
