#include <iostream>
using namespace std;

void printDiamond(int n) {
    int space = n - 1;

    // Top half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space--;

        // Print = symbols
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "=";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    space = 1;
    for (int i = 1; i <= n - 1; i++) {
        // Print leading spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space++;

        // Print = symbols
        for (int j = 1; j <= (2 * (n - i) - 1); j++) {
            cout << "=";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of lines for the diamond: ";
    cin >> n;
    printDiamond(n);
    return 0;
}
