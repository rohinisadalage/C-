#include <iostream>
using namespace std;
int main() {
    int num, factorial = 1, i = 1;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= num);
        cout << "Factorial of " << num << " is " << factorial << endl;
    }
    return 0;
}
