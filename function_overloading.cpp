#include <iostream>
#include <cmath>

class Circle {
private:
    int centerX;
    int centerY;
    int radius;
    double circumference;
    double area;

public:
    // Constructors
    Circle() : centerX(0), centerY(0), radius(0), circumference(0), area(0) {}
    Circle(int cx, int cy) : centerX(cx), centerY(cy), radius(0), circumference(0), area(0) {}
    Circle(int cx, int cy, int r) : centerX(cx), centerY(cy), radius(r), circumference(0), area(0) {}

    // Setters and getters
    void setCenter(int cx, int cy) {
        centerX = cx;
        centerY = cy;
    }

    void setRadius(int r) {
        radius = r;
    }

    int getCenterX() const {
        return centerX;
    }

    int getCenterY() const {
        return centerY;
    }

    int getRadius() const {
        return radius;
    }

    // Calculate and get area
    void calcArea() {
        area = M_PI * radius * radius;
    }

    double getArea() const {
        return area;
    }

    // Calculate and get circumference
    void calcCircumference() {
        circumference = 2 * M_PI * radius;
    }

    double getCircumference() const {
        return circumference;
    }

    // Function to check if a line is tangent to the circle
    bool isTangent(int x1, int y1, int x2, int y2) {
        // Check if the distance between the line and the center of the circle is equal to the radius
        double distance = abs((y2 - y1) * centerX - (x2 - x1) * centerY + x2 * y1 - y2 * x1) / sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
        return abs(distance - radius) < 0.001; // considering a tolerance for floating point precision
    }

    bool isTangent(int slope, int intercept) {
        // Check if the distance between the line and the center of the circle is equal to the radius
        double distance = abs(intercept - centerY + slope * centerX) / sqrt(1 + pow(slope, 2));
        return abs(distance - radius) < 0.001; // considering a tolerance for floating point precision
    }

    bool isTangent(const Circle& tl) {
        // Check if the distance between the centers of the circles is equal to the sum or difference of the radii
        double distance = sqrt(pow(tl.centerX - centerX, 2) + pow(tl.centerY - centerY, 2));
        return abs(distance - (radius + tl.radius)) < 0.001 || abs(distance - abs(radius - tl.radius)) < 0.001; // considering a tolerance for floating point precision
    }

    // Draw function
    void draw() const {
        std::cout << "Drawing circle at (" << centerX << ", " << centerY << ") with radius " << radius << std::endl;
    }
};

int main() {
    Circle c1;
    c1.draw();

    Circle c2(3, 4);
    c2.draw();

    Circle c3(5, 6, 7);
    c3.draw();

    return 0;
}
