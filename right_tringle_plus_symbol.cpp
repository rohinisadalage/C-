#include <iostream>

int main() {
    int n;

    // Get the number of rows for the triangle from the user
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // Loop through each row
    for(int i = 1; i <= n; ++i) {
        // Print the plus symbols for the current row
        for(int j = 1; j <= i; ++j) {
            std::cout << "+";
        }
        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
