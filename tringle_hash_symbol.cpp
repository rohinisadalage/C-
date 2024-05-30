#include <iostream>

int main() {
    int rows;

    // Prompt user for the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Loop to print each row
    for(int i = 1; i <= rows; ++i) {
        // Loop to print the hash symbols
        for(int j = 1; j <= i; ++j) {
            std::cout << "#";
        }
        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}
