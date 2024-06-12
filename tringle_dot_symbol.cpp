#include <iostream>

int main() {
    int height;

    // Prompt the user to enter the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Loop to print each row of the triangle
    for (int i = 1; i <= height; ++i) {
        // Loop to print the dots for each row
        for (int j = 1; j <= i; ++j) {
            std::cout << ".";
        }
        // Move to the next line after printing dots in the current row
        std::cout << std::endl;
    }

    return 0;
}
