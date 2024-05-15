#include <iostream>
using namespace std;

int main() {
    unsigned int a = 60;    // Binary: 0011 1100
    unsigned int b = 13;    // Binary: 0000 1101
    unsigned int result;

    // Bitwise AND
    result = a & b;         // 12
    cout << "a & b = " << result << endl;  // Output: 12

    // Bitwise OR
    result = a | b;         // 61
    cout << "a | b = " << result << endl;  // Output: 61

    // Bitwise XOR
    result = a ^ b;         // 49
    cout << "a ^ b = " << result << endl;  // Output: 49

    // Bitwise NOT
    result = ~a;            // -61 (Two's complement of 61)
    cout << "~a = " << result << endl;     // Output: -61

    // Left shift
    result = a << 2;        // 240
    cout << "a << 2 = " << result << endl; // Output: 240

    // Right shift
    result = a >> 2;        // 15
    cout << "a >> 2 = " << result << endl; // Output: 15

    return 0;
}
