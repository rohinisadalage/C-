#include <iostream>
using namespace std;

void printDiamond(int n) {
    int i, j;

    // Top half of the diamond
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = i; j < n; j++) {
            cout << " ";
        }
        // Print plus symbols
        for(j = 1; j <= (2 * i - 1); j++) {
            cout << "+";
        }
        // Move to the next line
        cout << endl;
    }

    // Bottom half of the diamond
    for(i = n-1; i >= 1; i--) {
        // Print leading spaces
        for(j = n; j > i; j--) {
            cout << " ";
        }
        // Print plus symbols
        for(j = 1; j <= (2 * i - 1); j++) {
            cout << "+";
        }
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter the number of rows for the top half of the diamond: ";
    cin >> n;

    printDiamond(n);

    return 0;
}
