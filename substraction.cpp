#include <iostream>
int subtract(int a, int b) {
    return a - b;
}
int main() {
    int num1, num2, result;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    result = subtract(num1, num2);
    std::cout << "Result of subtraction: " << result << std::endl;
    return 0;
}
