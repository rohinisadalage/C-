#include <iostream>
using namespace std;
int main() {
    int i = 1, j, rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    do {
        j = 1;
        do {
            cout << "*";
            j++;
        } while (j <= i);    
        cout << endl;
        i++;
    } while (i <= rows);
    return 0;
}
