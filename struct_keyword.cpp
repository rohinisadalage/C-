#include <iostream>
#include <string>
struct Person {
    std::string name;
    int age;
    float height;
};
int main() {
    Person person1;
    person1.name = "John";
    person1.age = 30;
    person1.height = 6.0;
    std::cout << "Name: " << person1.name << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << " feet" << std::endl;
    return 0;
}
