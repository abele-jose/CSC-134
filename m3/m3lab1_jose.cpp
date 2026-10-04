// CSC 134
// M3LAB1 - Menus and Choices
// josea
// 9/28/26

#include <iostream>
using namespace std;

void option1();
void option2();
void option3();

// beginning of the main() method
int main() {

  int choice; 

  // ask the question
  cout << "Which box has a million dollars?" << endl;
  cout << "1. Box 1" << endl;
  cout << "2. Box 2" << endl; 
  cout << "3. Box 3" << endl;
  cout << "? ";
  cin >> choice;


  if (1 == choice) {
    option1();
  }
  else if (2 == choice) {
    option2();
  }
  else if (3 == choice) {
    option3();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; 
} 

void option1() {
    cout << "You chose Box 1" << endl;
    cout << "You win a new toaster! No money for you!" << endl;
}

void option2() {
    cout << "You chose Box 2" << endl;
    cout << "You win a $1,000,000! Congradulations!" << endl;
}
void option3(){
  cout << "You chose Box 3" << endl;
  cout << "You win nothing. Sorry!" << endl;
}