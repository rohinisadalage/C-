#include <iostream>

// Template function to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using the max() function with different data types
    std::cout << "Maximum of 5 and 10: " << max(5, 10) << std::endl;
    std::cout << "Maximum of 3.5 and 7.8: " << max(3.5, 7.8) << std::endl;
    std::cout << "Maximum of 'hello' and 'world': " << max("hello", "world") << std::endl;

    return 0;
}
