#include <iostream>
#define SIZE 6

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[SIZE][SIZE];

    // Initializing the matrix with sample values
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = i * SIZE + j + 1; // Example values
        }
    }

    std::cout << "The 6x6 matrix is:" << std::endl;
    printMatrix(matrix);

    return 0;
}
