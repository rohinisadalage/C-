#include <iostream>

void printLeftTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "-";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    printLeftTriangle(rows);

    return 0;
}
