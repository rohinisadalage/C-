#include <iostream>
#include <iomanip>
int main() {
    int rows = 5, cols = 5;
    float multiplier = 0.5;
    std::cout << "      ";
    for (int j = 1; j <= cols; j++) {
        std::cout << std::setw(6) << std::fixed << std::setprecision(2) << j * multiplier << " ";
    }
    std::cout << std::endl;
    for (int i = 1; i <= rows; i++) {
        std::cout << std::setw(6) << std::fixed << std::setprecision(2) << i * multiplier << " ";  // Row header
        for (int j = 1; j <= cols; j++) {
            std::cout << std::setw(6) << std::fixed << std::setprecision(2) << i * j * multiplier * multiplier << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
