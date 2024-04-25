#include <iostream>
using namespace std;
int main() {
    int num = 1;

    loop: 
    cout << "Number: " << num << endl;
    num++;
    if (num <= 5)
    {
        goto loop;
    }
    return 0;
}
