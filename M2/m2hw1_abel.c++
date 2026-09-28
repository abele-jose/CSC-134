/*
CSC 134
M2HW2 - Homework (4 questions max)
josea
9/16/26
HOW TO USE:
 - Fill in the function for any questions you answer
 - uncomment those functions in main, so they run.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// COVERED in module 5, here's the basics
// LIST extra functions above main
// Write the full version below main
void question1();
void question2();
void question3();
void question4();



int main() {
    // Run only the questions you finish by removing the //
    //question1();
    //question2();
    //question3();
    question4();
}

void question1() {
    string name;
    double starting_account_balance;
    double deposit_amount;
    double withdrawl;
    double final_account_balance;
    int account_number = 1738679;

    cout << "Name?: ";
    cin >> name;

    cout << "Starting account balance?: $";
    cin >> starting_account_balance;

    cout << "Deposit amount: $";
    cin >> deposit_amount;

    cout << "Withdrawl amount?: $";
    cin >> withdrawl;

    final_account_balance = starting_account_balance + deposit_amount - withdrawl;

    cout << "Account name: " << name << endl;
    cout << "Account number: " << account_number << endl;
    cout << "Final account balance: $" << final_account_balance << endl;
}

void question2() {
    const double COST_PER_CUBIC_FOOT = 0.30;    
    const double CHARGE_PER_CUBIC_FOOT = 0.52;  

    double length, width, height;                
    double volume;                               
    double crate_cost;                           
    double crate_charge;                         
    double profit;                               

    cout << "Please enter the crate dimensions." << endl;
    cout << "Crate length: ";
    cin  >> length;
    cout << "Crate width:  ";
    cin  >> width;
    cout << "Crate height: ";
    cin  >> height;

    volume = length * width * height; 

    crate_cost = COST_PER_CUBIC_FOOT * volume;
    crate_charge = CHARGE_PER_CUBIC_FOOT * volume;

    profit = crate_charge - crate_cost; 

    cout << setprecision(2) << fixed;
    cout << "A crate measuring " << length << " x " << width << " x " << height << " ft." << endl;
    cout << "Is volume: " << volume << " cubic ft." << endl;
    cout << endl;
    cout << "Cost to build: $" << crate_cost << endl;
    cout << "Sells for:     $" << crate_charge << endl;
    cout << "Profit:        $" << profit << endl;
}

void question3() {
    int pizzas;
    int slices_per_pizza;
    int visitors;
    int leftover_pizza;
    int eaten_slices;
    int slices_left;

    cout << "How many pizzas did you order? ";
    cin >> pizzas;

    cout << "How many slices per pizza? ";
    cin >> slices_per_pizza;

    cout << "How many visitors are coming? ";
    cin >> visitors;

    leftover_pizza = pizzas * slices_per_pizza;

    eaten_slices = visitors & 3;

    slices_left = leftover_pizza - eaten_slices;

    cout << "Pieces of pizza left over: " << slices_left << endl;
}

void question4() {
    string school = "FTCC";
    string team = "TROJANS";

    cout << "LET'S GO " << school << endl;
    cout << "LET'S GO " << school << endl;
    cout << "LET'S GO " << school << endl;
    cout << "LET'S GO " << team << endl;
}