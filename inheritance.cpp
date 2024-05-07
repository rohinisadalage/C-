#include <iostream>

// Base class
class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    // Virtual function for calculating area
    virtual double area() const = 0; // Pure virtual function
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    // Implementation of area for rectangle
    double area() const override {
        return width * height;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    // Implementation of area for triangle
    double area() const override {
        return 0.5 * width * height;
    }
};

int main() {
    Rectangle rect(5, 4);
    Triangle tri(6, 3);

    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    std::cout << "Area of Triangle: " << tri.area() << std::endl;

    return 0;
}
