#include <iostream>
using namespace std;

int main() {
    int n; // Height of the triangle
    cout << "Enter the height of the triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print '@' symbols
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}
