/*
CSC 134
M5LAB1 - Choose Your Own Adventure
josea
10/28/26
This template is a starting point for your own program.
We use void functions to tell a simple story.
The player makes choices, and each choice calls a function.
*/

#include <iostream>
#include <limits>
using namespace std;

// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_front_entrance();
void choice_back_entrance();
void choice_go_home();
void enter_hidden_room();
void escape_museum();

int main() {
cout << "M5LAB1 - Choose Your Own Adventure" << endl;
// Start the story.
main_menu();
// When main_menu() returns, the story is over.
cout << "Thanks for playing!" << endl;
return 0; // finished with no errors
}
// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().
void main_menu() {
// A menu that accepts 1, 2, 3, or 4 (quit).
    cout << "Main Menu" << endl;
    cout << "The lights are on at the museum you guard... But the museum is closed?" << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front entrance" << endl;
    cout << "2. Sneak around back entrance" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";

    int choice = 0;
    cin >> choice;

    if (cin.fail()) {
    
        cin.clear(); 
        choice = 0; 
    }
// Throw away the rest of the line the player typed.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (1 == choice) {
        choice_front_entrance();
    } 
    else if (2 == choice) {
        choice_back_entrance();

    } 
    else if (3 == choice) {
        choice_go_home();

    } else if (4 == choice) {
        cout << "Ok, quitting game" << endl;
        return; 
    } 
    else {
    cout << "That's not a valid choice, please try again." << endl;
    main_menu(); 
    }
}

void choice_front_entrance() {
    cout << "Try the front entrance." << endl;
    cout << "It's locked." << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    int choice = 0;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        choice_back_entrance();
    } 
    else if (2 == choice) {
        choice_go_home();
    }
}

void choice_back_entrance() {
    cout << "You sneak around to the back of the museum." << endl;
    cout << "The back entrance is unlocked." << endl;
    cout << "You open the door and step inside." << endl;
    cout << "Do you: " << endl;
    cout << "1. Explore the hidden room" << endl;
    cout << "2. Give up and go home" << endl;

    int choice = 0;
    cout << "Choose: ";
    cin >> choice;

    if (1 == choice) {
        enter_hidden_room();
    }
    else if (2 == choice) {
        choice_go_home();
    }
    else {
        cout << "That's not a valid choice." << endl;
    }
}

void enter_hidden_room() {
    cout << "You go deeper into the museum." << endl;
    cout << "You discover a hidden room with secret exhibits. " << endl;
    cout << "One exhibit has its lights on, even though the museum is closed." << endl;
    cout << "You hear whispering and footsteps approaching." << endl;
    cout << "Do you: " << endl;
    cout << "1. Find a way to escape the museum " << endl;
    cout << "2. Leave everything behind and go home" << endl;

    int choice = 0;
    cout << "Chose: ";
    cin >> choice;

    if (1 == choice) {
        escape_museum();
    }
    else if (2 == choice) {
        choice_go_home();
    }
    else {
        cout << "Thats not a valid choice. " << endl;
    }
}

void escape_museum() {
    cout << "You seach the hidden room for an exit. " << endl;
    cout << "You find a secret hallway behind one of the exhibits. " << endl;
    cout << "You run inside the hallway and find a door leading outside." << endl;
    cout << "You escape the museum. The police are waiting for you." << endl;
    cout << "You're arrested on suspected robbery. But the real criminals inside got away." << endl;
    cout << "ENDING 2: You escaped the museum, and end up in jail. Don't go snooping next time!" << endl;
}

void choice_go_home() {
    cout << "You decide that exploring the museum isn't worth the risk." << endl;
    cout << "You clock out for the night and go home." << endl;
    cout << "Mystery just isn't your calling." << endl;
    cout << "ENDING 1: You got home safe, but the mystery remains one." << endl;
}
