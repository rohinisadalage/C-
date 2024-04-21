#include <iostream>

using namespace std;
struct Numbers {
    int num1;
    int num2;
};

int add(Numbers nums) {
    return nums.num1 + nums.num2;
}

int main() {
    Numbers nums;
    cout << "Enter first number: ";
    cin >> nums.num1;
    cout << "Enter second number: ";
    cin >> nums.num2;
    cout << "Addition: " << add(nums) << endl;
    return 0;
}
