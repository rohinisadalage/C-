#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    int numItems;
    double total = 0.0;
    cout << "Enter the number of items: ";
    cin >> numItems;
    for (int i = 1; i <= numItems; ++i) {
        double price;
        int quantity;
        cout << "\nEnter price of item " << i << ": ";
        cin >> price;
        cout << "Enter quantity of item " << i << ": ";
        cin >> quantity;
        total += price * quantity;
    }
    cout << fixed << setprecision(2);
    cout << "\nTotal Bill: $" << total << endl;
    return 0;
}
