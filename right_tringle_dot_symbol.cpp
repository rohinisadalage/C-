#include <iostream>

int main() {
    int n;

    // Prompt the user for the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> n;

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print dots for the current row
        for (int j = 1; j <= i; j++) {
            std::cout << ".";
        }
        // Move to the next line after printing dots for the current row
        std::cout << std::endl;
    }

    return 0;
}
