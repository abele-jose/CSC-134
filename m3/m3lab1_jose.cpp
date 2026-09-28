// CSC 134
// M3LAB1 - Menus and Choices
// josea
// 9/28/26

#include <iostream>
using namespace std;

void option1();
void option2();

// beginning of the main() method
int main() {

  int choice; 

  // ask the question
  cout << "Do you drop out or keep going to college?" << endl;
  cout << "1. Drop out" << endl;
  cout << "2. Keep going" << endl; 
  cout << "? ";
  cin >> choice;


  if (1 == choice) {
    option1();
  }
  else if (2 == choice) {
    option2();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; 
} 

void option1() {
    cout << "You chose Option 1" << endl;
    cout << "You are now a college dropout." << endl;
    int main() [
        
        int choice2;

        cout << "Do you get a job or become an influencer?" << endl;
        cout << "3. Get a job" << endl;
        cout << "4. Become an influencer" << endl;
        cin >> choice2;

        void job1();
        void job2();

        if (3 == choice2) {
        job1();
    }
    else if (4 == choice2) {
        job2();
    }
    else {
        cout << "I'm sorry, that is not a valid choice." << endl;
     }

    cout << "Thank you for playing!" << endl;
    return 0; 
    ]

}

void option2() {
    cout << "You chose Option 2" << endl;
    cout << "You end up successful in life. Conrats!" << endl;
}