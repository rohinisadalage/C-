#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask the user for the number of rows for the triangle
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Loop to print the left triangle
    for(int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for(int j = rows; j > i; j--) {
            cout << " ";
        }
        // Print the question marks
        for(int k = 1; k <= i; k++) {
            cout << "?";
        }
        cout << endl;
    }

    return 0;
}
