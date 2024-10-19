#include <iostream>
using namespace std;
int main() {
    int i = 5, j;
    do {
        j = i;
        do {
            cout << "*";
            j--;
        } while(j > 0);
        cout << endl;
        i--;
    } while(i > 0);
    return 0;
}
