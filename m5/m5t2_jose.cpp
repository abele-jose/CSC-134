/*
CSC 134
M5T2
josea
Partner: GPT-6 Luna
 and one void function.
*/ 


#include <iostream>
using namespace std;

// Prototypes: Declare functions here, define them under main.
int square(int num);                                // Does the math
void printAnswerLine(int number, int squared);      // prints a full line of the table

int main() {
    cout << "Table of Squares Program" << endl;
    
    for (int i = 1; i <= 10; i++) {
        int squared = i*i;
        printAnswerLine(i, squared);
    }

}

// Define functions here.
int square(int num) {
    // Does the math -- input, an integer, output, that integer squared
    return num * num;
}

void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}