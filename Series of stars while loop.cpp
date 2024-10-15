#include <iostream>
using namespace std;
int main() {
    int i = 1, j;
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    while (i <= rows) {
        j = 1;
        while (j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
