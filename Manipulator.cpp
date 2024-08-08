#include <iostream>
#include <iomanip>  
int main() {
    int number = 12345;
    double pi = 3.14159265358979;
    std::cout << "Basic output: " << number << std::endl;
    std::cout << "Field width 10: " << std::setw(10) << number << std::endl;
    std::cout << "Filled with zeros: " << std::setw(10) << std::setfill('0') << number << std::endl
    std::cout << std::setfill(' ');
    std::cout << "Left-aligned with width 10: " << std::left << std::setw(10) << number << std::endl;
    std::cout << "Right-aligned with width 10: " << std::right << std::setw(10) << number << std::endl;
    std::cout << "Pi with 3 decimal places: " << std::fixed << std::setprecision(3) << pi << std::endl;
    std::cout << "Number in hexadecimal: " << std::hex << number << std::endl;
    std::cout << "Number in octal: " << std::oct << number << std::endl;
    std::cout << "Number back in decimal: " << std::dec << number << std::endl;
    return 0;
}
