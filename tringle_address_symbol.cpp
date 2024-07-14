#include <iostream>

int main() {
    int n;

    // Prompt user for the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // Loop through each row
    for (int i = 1; i <= n; ++i) {
        // Print dollars in each row
        for (int j = 1; j <= i; ++j) {
            std::cout << "$";
        }
        // Move to the next line
        std::cout << std::endl;
    }

    return 0;
}
