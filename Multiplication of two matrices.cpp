#include <iostream>
using namespace std;
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            for (int k = 0; k < col1; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int row1, col1, row2, col2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> row2 >> col2;
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cin >> firstMatrix[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            cin >> secondMatrix[i][j];
        }
    }
    multiplyMatrices(firstMatrix, secondMatrix, result, row1, col1, row2, col2);
    cout << "Resultant matrix after multiplication:" << endl;
    displayMatrix(result, row1, col2);
    return 0;
}
