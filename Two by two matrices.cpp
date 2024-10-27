#include <iostream>
using namespace std;
class Matrix2x2 {
private:
    int data[2][2];
public:
    Matrix2x2(int a11, int a12, int a21, int a22) {
        data[0][0] = a11;
        data[0][1] = a12;
        data[1][0] = a21;
        data[1][1] = a22;
    }
    void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix2x2 add(const Matrix2x2 &other) const {
        return Matrix2x2(
            data[0][0] + other.data[0][0], data[0][1] + other.data[0][1],
            data[1][0] + other.data[1][0], data[1][1] + other.data[1][1]
        );
    }
    Matrix2x2 subtract(const Matrix2x2 &other) const {
        return Matrix2x2(
            data[0][0] - other.data[0][0], data[0][1] - other.data[0][1],
            data[1][0] - other.data[1][0], data[1][1] - other.data[1][1]
        );
    }
    Matrix2x2 multiply(const Matrix2x2 &other) const {
        return Matrix2x2(
            data[0][0] * other.data[0][0] + data[0][1] * other.data[1][0],
            data[0][0] * other.data[0][1] + data[0][1] * other.data[1][1],
            data[1][0] * other.data[0][0] + data[1][1] * other.data[1][0],
            data[1][0] * other.data[0][1] + data[1][1] * other.data[1][1]
        );
    }
};
int main() {
    Matrix2x2 mat1(1, 2, 3, 4);
    Matrix2x2 mat2(5, 6, 7, 8);
    cout << "Matrix 1:" << endl;
    mat1.display();
    cout << "Matrix 2:" << endl;
    mat2.display();
    Matrix2x2 result;
    result = mat1.add(mat2);
    cout << "Addition of matrices:" << endl;
    result.display();
    result = mat1.subtract(mat2);
    cout << "Subtraction of matrices:" << endl;
    result.display();
    result = mat1.multiply(mat2);
    cout << "Multiplication of matrices:" << endl;
    result.display();
    return 0;
}
