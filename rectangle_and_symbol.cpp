#include <iostream>

void printRectangle(int width, int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << "&";
        }
        std::cout << std::endl;
    }
}

int main() {
    int width, height;

    // Get the dimensions of the rectangle from the user
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;

    // Print the rectangle
    printRectangle(width, height);

    return 0;
}
