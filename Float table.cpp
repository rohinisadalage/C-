#include <iostream>
#include <iomanip>  
int main() {
    float numbers[] = {1.23, 4.56, 7.89, 10.11, 12.13};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    std::cout << "Index" << "\t" << "Value" << std::endl;
    std::cout << "-----" << "\t" << "-----" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << i << "\t" << std::fixed << std::setprecision(2) << numbers[i] << std::endl;
    }
    return 0;
}
