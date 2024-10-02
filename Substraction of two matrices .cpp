#include <iostream>
using namespace std;
#define MAX 100
void subtractMatrices(int rows, int cols, int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}
int main() {
    int rows, cols;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }
    subtractMatrices(rows, cols, matrix1, matrix2, result);
    cout << "Result of matrix subtraction:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
