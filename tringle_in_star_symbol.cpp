#include <iostream>
using namespace std;

int main() {
    int rows;

    // Prompt the user to enter the number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Loop through each row
    for(int i = 1; i <= rows; i++) {
        // Print spaces
        for(int j = i; j < rows; j++) {
            cout << " ";
        }
        // Print stars
        for(int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
