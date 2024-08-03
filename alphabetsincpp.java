#include <iostream>
int main() {
    for(char ch = 'A'; ch <= 'Z'; ch++) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;
    for(char ch = 'a'; ch <= 'z'; ch++) {
        std::cout << ch << " ";
    }
    std::cout << std::endl;
    return 0;
}
