#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1;
int main() {
    int arr[] = {2, 4, 0, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 1;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        cout << "Element not found in array" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}
