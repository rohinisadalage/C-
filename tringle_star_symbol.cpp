#include <iostream>

int main() {
    int rows;

    // Ask user for the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Loop to print the triangle
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
