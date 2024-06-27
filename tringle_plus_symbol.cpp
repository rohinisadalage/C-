#include <iostream>
using namespace std;

int main() {
    int rows;
    
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++) {
        // Print spaces
        for(int j = i; j < rows; j++) {
            cout << " ";
        }
        // Print plus symbols
        for(int k = 1; k <= (2 * i - 1); k++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
