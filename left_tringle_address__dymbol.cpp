#include <iostream>
using namespace std;

int main() {
    int n;

    // Get the number of rows for the triangle
    cout << "Enter the number of rows: ";
    cin >> n;

    // Loop to print the triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}
