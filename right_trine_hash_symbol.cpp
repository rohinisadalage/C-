#include <iostream>
using namespace std;

int main() {
    int height;

    // Ask the user for the height of the triangle
    cout << "Enter the height of the right-angled triangle: ";
    cin >> height;

    // Loop to print each row of the triangle
    for (int i = 1; i <= height; ++i) {
        // Loop to print the appropriate number of hash symbols for the current row
        for (int j = 1; j <= i; ++j) {
            cout << "#";
        }
        // Move to the next line after printing each row
        cout << endl;
    }

    return 0;
}
