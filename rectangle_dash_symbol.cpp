#include <iostream>
using namespace std;

int main() {
    int width, height;

    // Get the dimensions of the rectangle
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // Print the rectangle
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "-";
        }
        cout << endl;
    }

    return 0;
}
