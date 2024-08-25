#include <iostream>

class Base {
public:
    int base_data;
    Base() : base_data(0) {
        std::cout << "Base Constructor\n";
    }
    void showBaseData() {
        std::cout << "Base data: " << base_data << "\n";
    }
};
class Derived1 : public Base {
public:
    Derived1() {
        std::cout << "Derived1 Constructor\n";
    }
};
class Derived2 : public Base {
public:
    Derived2() {
        std::cout << "Derived2 Constructor\n";
    }
};
class Derived3 : public Derived1, public Derived2 {
public:
    Derived3() {
        std::cout << "Derived3 Constructor\n";
    }
};
int main() {
    Derived3 d3;
    d3.Derived1::base_data = 10;
    d3.Derived2::base_data = 20;
    std::cout << "Derived1 Base data: " << d3.Derived1::base_data << "\n";
    std::cout << "Derived2 Base data: " << d3.Derived2::base_data << "\n";
    return 0;
}
