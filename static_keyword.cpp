#include <iostream>

class MyClass {
public:
    static int staticVariable;
    
    void incrementStaticVariable() {
        staticVariable++;
    }
};

// Initializing the static variable outside the class definition
int MyClass::staticVariable = 0;

int main() {
    MyClass obj1, obj2;
    
    obj1.incrementStaticVariable();
    std::cout << "Static Variable from obj1: " <<⬤
