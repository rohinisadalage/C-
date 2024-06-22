#include <iostream>

void printRightTriangle(int height) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "-";
        }
        std::cout << std::endl;
    }
}

int main() {
    int height;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    printRightTriangle(height);

    return 0;
}
