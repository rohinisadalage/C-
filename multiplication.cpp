#include <iostream>
int main() {
    int num1, num2, product;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    product = num1 * num2;
    std::cout << "Product of " << num1 << " and " << num2 << " is " << product << std::endl;
    return 0;
}
