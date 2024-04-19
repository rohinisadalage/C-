#include <iostream>
enum class Color {
    RED,
    GREEN,
    BLUE
};
int main() {
    Color selected_color;
    selected_color = Color::GREEN;
    switch (selected_color) {
        case Color::RED:
            std::cout << "Selected color is RED" << std::endl;
            break;
        case Color::GREEN:
            std::cout << "Selected color is GREEN" << std::endl;
            break;
        case Color::BLUE:
            std::cout << "Selected color is BLUE" << std::endl;
          break;
    }
    return 0;
}
