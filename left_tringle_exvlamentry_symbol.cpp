#include <iostream>

int main() {
    int height;

    // Prompt the user for the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Loop through each row
    for(int i = 1; i <= height; ++i) {
        // Print the appropriate number of exclamation marks for the current row
        for(int j = 1; j <= i; ++j) {
            std::cout << "!";
        }
        // Move to the next line after printing each row
        std::cout << std::endl;
    }

    return 0;
}
