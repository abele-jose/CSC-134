// CSC 134
// M5HW - Bronze
// josea
// 11/15/2026

#include <iostream>
using namespace std;

void question1();
void question2();
void question3();

int main() {
    question1();
    question2();
    question3();
}

void question1() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "Enter Month: ";
    cin >> month1; 

    cout << "Enter Rainfall For " << month1 << ": ";
    cin >> rain1;

    cout << "Enter Month: ";
    cin >> month2; 

    cout << "Enter Rainfall For " << month2 << ": ";
    cin >> rain2;

    cout << "Enter Month: ";
    cin >> month3; 

    cout << "Enter Rainfall For " << month3 << ": ";
    cin >> rain3;

    double average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);

    cout << "The average rainfar for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl;

}

void question2() {
    double width, length, height;

    cout << "Enter width of block: ";
    cin >> width;

    cout << "Enter length of block: ";
    cin >> length;

    cout << "Enter heigth of block: ";
    cin >> height;

    double volume = width*length*heigth;

    cout << "The volume of the block is: " << volume << endl;

}

void question3() {
    int number;

    cout << "Enter a number (1 -10): ";
    cin >> number;

    if (number == 1 )
    cout << "The Roman number version of " << number << " is I." << endl;
    else if (number == 2 )
    cout << "The Roman number version of " << number << " is II." << endl;
    else if (number == 3 )
    cout << "The Roman number version of " << number << " is III." << endl;
    else if (number == 4 )
    cout << "The Roman number version of " << number << " is IV." << endl;
    else if (number == 5 )
    cout << "The Roman number version of " << number << " is V." << endl;
    else if (number == 6 )
    cout << "The Roman number version of " << number << " is VI." << endl;
    else if (number == 7 )
    cout << "The Roman number version of " << number << " is VII." << endl;
    else if (number == 8 )
    cout << "The Roman number version of " << number << " is VIII." << endl;
    else if (number == 9 )
    cout << "The Roman number version of " << number << " is IX." << endl;
    else if (number == 10 )
    cout << "The Roman number version of " << number << " is X." << endl;
    else
    cout << "Invalid number. Please enter a number between 1 and 10." << endl;
}