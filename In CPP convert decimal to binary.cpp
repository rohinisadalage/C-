#include <iostream>
#include <vector>
using namespace std;
void decimalToBinary(int num) {
    vector<int> binary;
    while (num > 0) {
        binary.push_back(num % 2);
        num = num / 2;
    }
    cout << "Binary: ";
    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}
int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    decimalToBinary(decimal);
    return 0;
}
