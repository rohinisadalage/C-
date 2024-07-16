#include <iostream>
using namespace std;

int main() {
    int height;

    // Prompt user for the height of the triangle
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Print the right triangle
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "@";
        }
        cout << endl;
    }

    return 0;
}
