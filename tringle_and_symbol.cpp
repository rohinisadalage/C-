#include <iostream>
using namespace std;

int main() {
    int rows;

    // Get the number of rows from the user
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Print the triangle
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "& ";
        }
        cout << endl;
    }

    return 0;
}
