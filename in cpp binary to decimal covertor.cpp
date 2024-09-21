#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n = n / 10;
        decimalNumber += remainder * pow(2, i);
        i++;
    }
    return decimalNumber;
}
int main() {
    long long n;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "Decimal number: " << binaryToDecimal(n) << endl;
    return 0;
}
