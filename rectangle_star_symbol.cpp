#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    // Set the dimensions of the rectangle
    rows = 5;    // Number of rows
    columns = 10; // Number of columns

    // Loop through each row
    for(int i = 0; i < rows; i++) {
        // Loop through each column
        for(int j = 0; j < columns; j++) {
            cout << "*";
        }
        // Move to the next line after printing all columns in a row
        cout << endl;
    }

    return 0;
}
