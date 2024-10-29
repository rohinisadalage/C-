#include <iostream>
using namespace std;
class Matrix4x4 {
private:
    int matrix[4][4];
public:
    Matrix4x4() {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                matrix[i][j] = 0;
    }
    Matrix4x4(int values[4][4]) {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                matrix[i][j] = values[i][j];
    }
    void print() const {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }
    Matrix4x4 add(const Matrix4x4 &other) const {
        Matrix4x4 result;
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                result.matrix[i][j] = this->matrix[i][j] + other.matrix[i][j];
        return result;
    }
    Matrix4x4 multiply(const Matrix4x4 &other) const {
        Matrix4x4 result;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    result.matrix[i][j] += this->matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
};
int main() {
    int values1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int values2[4][4] = {
        {16, 15, 14, 13},
        {12, 11, 10, 9},
        {8, 7, 6, 5},
        {4, 3, 2, 1}
    };
    Matrix4x4 mat1(values1);
    Matrix4x4 mat2(values2);
    cout << "Matrix 1:" << endl;
    mat1.print();
    cout << "\nMatrix 2:" << endl;
    mat2.print();
    Matrix4x4 sum = mat1.add(mat2);
    cout << "\nSum of Matrix 1 and Matrix 2:" << endl;
    sum.print();
    Matrix4x4 product = mat1.multiply(mat2);
    cout << "\nProduct of Matrix 1 and Matrix 2:" << endl;
    product.print();
    return 0;
}
