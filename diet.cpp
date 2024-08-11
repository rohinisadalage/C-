#include <iostream>
#include <vector>
#include <string>
struct FoodItem {
    std::string name;
    int calories;
    float protein;
    float carbs;
    float fats;
};
void addFoodItem(std::vector<FoodItem>& items);
void displayTotal(const std::vector<FoodItem>& items);
int main() {
    std::vector<FoodItem> items;
    int choice;
    do {
        std::cout << "\nDaily Diet Tracker\n";
        std::cout << "1. Add Food Item\n";
        std::cout << "2. Display Total Nutritional Intake\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                addFoodItem(items);
                break;
            case 2:
                displayTotal(items);
                break;
            case 3:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
void addFoodItem(std::vector<FoodItem>& items) {
    FoodItem item;
    std::cout << "Enter food name: ";
    std::cin.ignore();
    std::getline(std::cin, item.name);
    std::cout << "Enter calories: ";
    std::cin >> item.calories;
    std::cout << "Enter protein (g): ";
    std::cin >> item.protein;
    std::cout << "Enter carbs (g): ";
    std::cin >> item.carbs;
    std::cout << "Enter fats (g): ";
    std::cin >> item.fats;
    items.push_back(item);
}
void displayTotal(const std::vector<FoodItem>& items) {
    int totalCalories = 0;
    float totalProtein = 0.0f, totalCarbs = 0.0f, totalFats = 0.0f;

    for (const auto& item : items) {
        totalCalories += item.calories;
        totalProtein += item.protein;
        totalCarbs += item.carbs;
        totalFats += item.fats;
    }
    std::cout << "\nTotal Nutritional Intake for the Day:\n";
    std::cout << "Calories: " << totalCalories << " kcal\n";
    std::cout << "Protein: " << totalProtein << " g\n";
    std::cout << "Carbs: " << totalCarbs << " g\n";
    std::cout << "Fats: " << totalFats << " g\n";
}
