// CSC 134
// M3HW1 - Bronze
// josea
// 10/11/26

#include <iostream>
#include <iomanip>
using namespace std;

void question1();
void question2();
void question3();
void question4();

int main() {
    // Run only the questions you finish by removing the //
    //question1();
    question2();
    //question3();
    //question4();
}

void question1() {
    string answer;

    cout << "Hello, I'm a C++ program! " << endl;
    cout << "Do you want to be friends? Please type yes or no." << endl;
    cin >> answer;

    if (answer == "yes") {
        cout << "Amazing! We're going to be best friends!" << endl; 
    }
    else if (answer == "no") {
        cout << "That's not very nice. I don't want to be your friend anyways! " << endl;
    }
    else {
        cout << "You don't have to decide right now! Take your time." << endl;
    }
}

void question2() {
    string meal_name;
    double meal_price;
    double tax_rate;
    double tax_amount;
    double tip;
    double total;
    int order_type;

    meal_name = "Meal";

    cout << "Enter the price of the meal: $" << endl;
    cin >> meal_price;

    cout << "Enter 1 if the meal was dine-in." << endl;
    cout << "Enter 2 if the meal was to-go." << endl;
    cin >> order_type;

    tax_rate = 0.08;
    tax_amount = meal_price * tax_rate;
    tip = 0;

    if (order_type == 1) {
        tip = meal_price * 0.15;
    }
    else if (order_type == 2) {
        tip = 0;
    }
    else {
        cout << "Invalid order option. " << endl;
    }

    total = meal_price + tax_amount + tip;

    string line = "------------------------------";15
    cout << line << endl;

    cout << setprecision(2) << fixed;
    cout << setw(20) << meal_name << setw(10) <<  meal_price << endl;
    cout << setw(20) << " Tax: " << setw(10) << tax_amount << endl;
    cout << setw(20) << "Tip: " << setw(10) << tip << endl;
    cout << line << endl;
    cout << setw(20) << "Total: " << setw(10) << total << endl;
    cout << "Thank You Come Again" << endl << endl;
}