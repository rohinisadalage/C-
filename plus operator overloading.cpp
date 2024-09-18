#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point operator + (const Point& p) {
        return Point(x + p.x, y + p.y);
    }
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p1(3, 4);
    Point p2(5, 6);
    Point sum = p1 + p2;
    cout << "Sum of points: ";
    sum.display();
    return 0;
}
