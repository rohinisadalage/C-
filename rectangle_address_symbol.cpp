#include <iostream>

// Function to print a rectangle with a given symbol
void printRectangle(int width, int height, char symbol) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << symbol << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    int width = 10;    // Width of the rectangle
    int height = 5;    // Height of the rectangle
    char symbol = '@'; // Symbol to fill the rectangle

    printRectangle(width, height, symbol);

    return 0;
}
