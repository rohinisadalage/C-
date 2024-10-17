#include <iostream>
using namespace std;
int main() {
    int n, i, j;
    cout << "Enter the number of rows: ";
    cin >> n;
    i = n;
    while (i > 0) {
        j = i;
        while (j > 0) {
            cout << "*";
            j--;
        }
        cout << endl;
        i--;
    }
    return 0;
}
