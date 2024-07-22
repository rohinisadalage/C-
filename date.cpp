#include <iostream>
#include <chrono>
#include <ctime>
int main() {
    auto now = std::chrono::system_clock::now();
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);
    std::tm *current_time = std::localtime(&now_c);
    char date_string[11]; 
    std::strftime(date_string, sizeof(date_string), "%Y-%m-%d", current_time);
    std::cout << "Current date: " << date_string << std::endl;
    return 0;
}
