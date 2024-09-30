#include <iostream>
using namespace std;
#define ROWS 3
#define COLS 3
void addMatrices(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() {
    int matrix1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix2[ROWS][COLS] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[ROWS][COLS];
    addMatrices(matrix1, matrix2, result);
    cout << "Matrix 1:" << endl;
    printMatrix(matrix1);
    cout << "Matrix 2:" << endl;
    printMatrix(matrix2);
    cout << "Resultant Matrix (Sum):" << endl;
    printMatrix(result);
    return 0;
}
