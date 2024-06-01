#include <iostream>

int main() {
    int height;

    // Ask the user to input the height of the triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Loop to print each row of the triangle
    for(int i = 1; i <= height; ++i) {
        // Print the hash symbols for the current row
        for(int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        // Move to the next line after printing the hash symbols for the current row
        std::cout << std::endl;
    }

    return 0;
}
