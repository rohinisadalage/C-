#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Top half of the diamond
    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = i; j < n; ++j) {
            cout << " ";
        }
        // Print hash symbols
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << "#";
        }
        // Move to the next line
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        // Print leading spaces
        for (int j = n; j > i; --j) {
            cout << " ";
        }
        // Print hash symbols
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << "#";
        }
        // Move to the next line
        cout << endl;
    }
}

int main() {
    int n;
    
    // Ask the user to enter the number of rows for the top half of the diamond
    cout << "Enter the number of rows for the top half of the diamond: ";
    cin >> n;

    // Print the diamond
    printDiamond(n);

    return 0;
}
