#include <iostream>
using namespace std;
const float PI = 3.14159;
int main() {
    float radius, area;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = PI * radius * radius;
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    return 0;
}
