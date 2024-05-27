#include <iostream>
using namespace std;

void printDiamond(int rows) {
    int n = rows * 2 - 1;  // Total number of rows for the full diamond

    // Upper half of the diamond (including the middle row)
    for (int i = 1; i <= rows; i++) {
        for (int j = i; j < rows; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "@";
        }
        cout << endl;
    }
    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "@";
        }
        cout << endl;
    }
}
int main() {
    int rows;
    cout << "Enter the number of rows for the diamond: ";
    cin >> rows;

    printDiamond(rows);

    return 0;
}
