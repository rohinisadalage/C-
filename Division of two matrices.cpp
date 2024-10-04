#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE 2 
float determinant(float matrix[SIZE][SIZE]) {
    return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
}
bool inverse(float matrix[SIZE][SIZE], float inverseMatrix[SIZE][SIZE]) {
    float det = determinant(matrix);
    if (det == 0) {
        cout << "Matrix inverse cannot be calculated. Determinant is zero." << endl;
        return false;
    }
    inverseMatrix[0][0] = matrix[1][1] / det;
    inverseMatrix[0][1] = -matrix[0][1] / det;
    inverseMatrix[1][0] = -matrix[1][0] / det;
    inverseMatrix[1][1] = matrix[0][0] / det;
    return true;
}
void multiplyMatrices(float matrixA[SIZE][SIZE], float matrixB[SIZE][SIZE], float result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}
void displayMatrix(float matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << setw(8) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    float matrixA[SIZE][SIZE] = {{4, 7}, {2, 6}};  // Example matrix A
    float matrixB[SIZE][SIZE] = {{1, 2}, {3, 4}};
