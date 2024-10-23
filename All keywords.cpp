#include <iostream> 
using namespace std;
namespace myNamespace { 
    int nsVar = 42;
}
class Base { 
protected:
    int protectedVar;
public:
    virtual void display() { 
        cout << "Base class display function." << endl;
    }
    Base() { protectedVar = 10; } 
};
class Derived : public Base { 
public:
    void display() override { 
        cout << "Derived class display function." << endl;
    }
    Derived() : Base() { } 
};
int main() {
    int a = 5; 
    float f = 5.5f; 
    double d = 5.12345; 
    char ch = 'A';
    bool flag = true;
    const int constantVar = 10; 
    unsigned int uInt = 123; 
    signed int sInt = -10; 
    long long int largeNum = 10000000000; 
    if (a > 0) {
        cout << "a is positive." << endl;
    } else {
        cout << "a is non-positive." << endl;
    }
    switch (a) {
        case 5:
            cout << "a is 5." << endl;
            break; 
        default:
            cout << "a is not 5." << endl;
            break;
    }
    for (int i = 0; i < 3; ++i;
        if (i == 1) continue; 
        cout << "For loop iteration: " << i << endl;
    }
    int count = 0;
    while (count < 3) { 
        cout << "While loop iteration: " << count << endl;
        count++;
    }
    count = 0;
    do { 
        cout << "Do-While loop iteration: " << count << endl;
        count++;
    } while (count < 3);
    int* dynamicVar = new int(10); 
    cout << "Dynamic variable: " << *dynamicVar << endl;
    delete dynamicVar; 
    try {
        if (a < 0) throw "Negative number"; // 'throw'
        else cout << "a is valid." << endl;
    } catch (const char* msg)
