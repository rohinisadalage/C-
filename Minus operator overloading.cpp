#include <iostream>
class Vector {
private:
    int x, y;
public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}
    Vector operator-(const Vector &v) const {
        return Vector(x - v.x, y - v.y);
    }
    void display() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};
int main() {
    Vector v1(10, 20);
    Vector v2(4, 6);
    Vector result = v1 - v2;
    std::cout << "Result of subtraction: ";
    result.display();
    return 0;
}
