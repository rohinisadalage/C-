#include <iostream>
#define SIZE 10
int main() {
    int matrix[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = i * j; 
        }
    }
    std::cout << "10x10 Matrix:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << matrix[i][j] << "\t"; 
        }
        std::cout << std::endl;
    }
    return 0;
}
