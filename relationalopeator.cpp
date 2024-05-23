#include <iostream>

int main() {
    int a, b;

    // Prompt user to enter two integers
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    // Using relational operators
    std::cout << "Results of relational operators between " << a << " and " << b << ":\n";

    // Equal to
    if (a == b) {
        std::cout << a << " is equal to " << b << std::endl;
    } else {
        std::cout << a << " is not equal to " << b << std::endl;
    }

    // Not equal to
    if (a != b) {
        std::cout << a << " is not equal to " << b << std::endl;
    } else {
        std::cout << a << " is equal to " << b << std::endl;
    }

    // Greater than
    if (a > b) {
        std::cout << a << " is greater than " << b << std::endl;
    } else {
        std::cout << a << " is not greater than " << b << std::endl;
    }

    // Less than
    if (a < b) {
        std::cout << a << " is less than " << b << std::endl;
    } else {
        std::cout << a << " is not less than " << b << std::endl;
    }

    // Greater than or equal to
    if (a >= b) {
        std::cout << a << " is greater than or equal to " << b << std::endl;
    } else {
        std::cout << a << " is not greater than or equal to " << b << std::endl;
    }

    // Less than or equal to
    if (a <= b) {
        std::cout << a << " is less than or equal to " << b << std::endl;
    } else {
        std::cout << a << " is not less than or equal to " << b << std::endl;
    }

    return 0;
}
