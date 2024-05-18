#include <iostream>
#include <vector>
using namespace std;
void decimalToBinary(int n) {
    vector<int> binaryNum;
    while (n > 0) {
        binaryNum.push_back(n % 2);
        n = n / 2;
    }
    for (int i = binaryNum.size() - 1; i >= 0; i--)
        cout << binaryNum[i];
}
int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    cout << "Binary representation: ";
    if (n == 0) {
        cout << "0"; // Special case for 0 as it should output 0 directly
    } else {
        decimalToBinary(n);
    }
    cout << endl;
    return 0;
}
