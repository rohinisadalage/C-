#include <iostream>
using namespace std;

int main() {
    int goal;
    int dietType;

    cout << "Welcome to the Simple Diet Plan!" << endl;
    cout << "Choose your goal:" << endl;
    cout << "1. Lose Weight" << endl;
    cout << "2. Maintain Weight" << endl;
    cout << "3. Gain Weight" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> goal;

    cout << "\nSelect your diet type:" << endl;
    cout << "1. Vegetarian" << endl;
    cout << "2. Non-Vegetarian" << endl;
    cout << "3. Vegan" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> dietType;

    cout << "\nYour diet plan:" << endl;

    if (goal == 1) { // Lose Weight
        if (dietType == 1) { // Vegetarian
            cout << "- Breakfast: Oatmeal with fruits" << endl;
            cout << "- Lunch: Mixed vegetable salad with chickpeas" << endl;
            cout << "- Dinner: Grilled vegetables with quinoa" << endl;
        } else if (dietType == 2) { // Non-Vegetarian
            cout << "- Breakfast: Scrambled eggs with avocado" << endl;
            cout << "- Lunch: Grilled chicken salad" << endl;
            cout << "- Dinner: Salmon with steamed vegetables" << endl;
        } else if (dietType == 3) { // Vegan
            cout << "- Breakfast: Smoothie with almond milk, banana, and spinach" << endl;
            cout << "- Lunch: Quinoa salad with mixed greens" << endl;
            cout << "- Dinner: Lentil soup with vegetables" << endl;
        }
    } else if (goal == 2) { // Maintain Weight
        if (dietType == 1) {
            cout << "- Breakfast: Greek yogurt with granola and berries" << endl;
            cout << "- Lunch: Brown rice with mixed vegetables and tofu" << endl;
            cout << "- Dinner: Whole-wheat pasta with vegetables" << endl;
        } else if (dietType == 2) {
            cout << "- Breakfast: Omelet with spinach and tomatoes" << endl;
            cout << "- Lunch: Grilled chicken with sweet potatoes" << endl;
            cout << "- Dinner: Beef stir-fry with bell peppers and broccoli" << endl;
        } else if (dietType == 3) {
            cout << "- Breakfast: Chia pudding with almond milk and berries" << endl;
            cout << "- Lunch: Brown rice with chickpeas and vegetables" << endl;
            cout << "- Dinner: Vegetable stir-fry with tofu" << endl;
        }
    } else if (goal == 3) { // Gain Weight
        if (dietType == 1) {
            cout << "- Breakfast: Smoothie with oats, milk, and fruits" << endl;
            cout << "- Lunch: Whole-wheat pasta with beans and vegetables" << endl;
            cout << "- Dinner: Baked potato with cottage cheese and salad" << endl;
        } else if (dietType == 2) {
            cout << "- Breakfast: Peanut butter toast with bananas" << endl;
            cout << "- Lunch: Chicken sandwich with whole-grain bread" << endl;
            cout << "- Dinner: Steak with mashed potatoes and greens" << endl;
        } else if (dietType == 3) {
            cout << "- Breakfast: Smoothie with almond milk, oats, and banana" << endl;
            cout << "- Lunch: Lentil stew with brown rice" << endl;
            cout << "- Dinner: Chickpea curry with quinoa" << endl;
        }
    } else {
        cout << "Invalid input. Please restart the program and select a valid option." << endl;
    }

    cout << "\nRemember to drink water and exercise regularly!" << endl;

    return 0;
}
