#include <iostream>

int main() {
    int width, height;

    // Set the dimensions of the rectangle
    width = 10;
    height = 5;

    // Loop through each row
    for (int i = 0; i < height; i++) {
        // Loop through each column in the row
        for (int j = 0; j < width; j++) {
            // Print the '@' symbol
            std::cout << "@";
        }
        // Print a new line after each row
        std::cout << std::endl;
    }

    return 0;
}
