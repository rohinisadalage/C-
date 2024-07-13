#include <iostream>

void printDiamond(int n) {
    // Print the upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            std::cout << " ";
        }
        // Print the question mark symbols
        for (int j = 1; j <= (2 * i - 1); j++) {
            std::cout << "?";
        }
        std::cout << std::endl;
    }

    // Print the lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            std::cout << " ";
        }
        // Print the question mark symbols
        for (int j = 1; j <= (2 * i - 1); j++) {
            std::cout << "?";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;

    std::cout << "Enter the number of rows for the diamond: ";
    std::cin >> n;

    printDiamond(n);

    return 0;
}
