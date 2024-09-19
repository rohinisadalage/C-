#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imaginary - obj.imaginary);
    }
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};
int main() {
    Complex num1(5.5, 3.2);
    Complex num2(2.3, 1.1);
    Complex result = num1 - num2;
    cout << "Result of subtraction: ";
    result.display();
    return 0;
}
