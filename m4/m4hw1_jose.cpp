// CSC 134 
// M4HW1 - Silver
// josea
// 10/18/26

// the loop should be the size of an actual times table
// the user should be asked firstNum


#include <iostream>
using namespace std;

int main() {
    int firstNum, answer;
    
    cout << "Enter a number from 1 to 12." << endl;
    cin >> firstNum;
    
    for (int i=1; i<= 12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << "." << endl;
    }
}