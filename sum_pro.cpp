#include <iostream>
using namespace std;

int main() {
    int i, product = 1, sum = 0, x;
    cout << "Enter the value of n: ";
    cin >> i;

    while (i > 0) {
        x = i % 10;
        if (x % 2 == 0) {
            sum += x;
        } else {
            product *= x;
        }
        i /= 10;
    }

    cout << "The sum of even numbers is: " << sum << endl;
    cout << "The product of odd numbers is: " << product << endl;
    cout << "Thank You...!" << endl;
    
    return 0;
}
