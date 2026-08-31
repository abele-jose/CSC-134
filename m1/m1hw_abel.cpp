// CSC 134
/*
M1HW - Movie Talk
Jose, A
8/31/26
Example: Talk about Shrek
*/

#include <iostream>
using namespace std;

// Starting point
int main() {

    // Purpose: Practice using string, int, and double within natural text.
    // Declare variables
    string movie_name;      // Film Title as in IMDB
    int    movie_year;      // year of film release
    double movie_grossm; // millions of USD of the gross 

    // Example: Project Hail Mary
    movie_name = "Project Hail Mary";
    movie_year = 2026;
    movie_grossm = 684.1; // about less than half a billion, internationally

    // Print the movie blurb
    cout << "The movie " << movie_name << " came out in " << movie_year << "." << endl;

    cout << "It grossed in total $" << movie_grossm << " million." << endl;

    // Print a movie quote
    cout << "QUOTE" << endl << " \t\"Grace say Grace will die. Rocky fix.\" " << endl;

    return 0; // no errors
}
