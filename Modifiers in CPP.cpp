#include <iostream>
class Example {
public:
    void publicMethod() {
        std::cout << "Public method called!" << std::endl;
    }
protected:
    void protectedMethod() {
        std::cout << "Protected method called!" << std::endl;
    }
private:
    void privateMethod() {
        std::cout << "Private method called!" << std::endl;
    }
};
class Derived : public Example {
public:
    void callProtected() {
        protectedMethod(); 
};
void demonstrateConstModifier(const int x) {
    std::cout << "Const value: " << x << std::endl;
}
class StaticExample {
public:
    static int counter;
    void incrementCounter() {
        counter++;
    }
    static void printCounter() {
        std::cout << "Static counter value: " << counter << std::endl;
    }
};
int StaticExample::counter = 0; 
int main() {
    Example obj;
    obj.publicMethod();
    derivedObj.callProtected();
    demonstrateConstModifier(10);
    StaticExample example1, example2;
    example1.incrementCounter();
    StaticExample::printCounter(); 
    example2.incrementCounter();
    StaticExample::printCounter();  
    return 0;
}
