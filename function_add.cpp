#include <iostream>
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2, result;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;
    result = add(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}
