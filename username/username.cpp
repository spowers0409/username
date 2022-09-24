// username.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Added using namespace std to not have to contine using std::

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    // Array of names that will be viewed againt user input string in the for loop
    string fullName[3] = { "John Wick", "Samuel Powers", "Brooke Goggin"};
    string str_input;

    // Produces a random number that will be used as a "one time pin" for access
    int random = rand();

    // Boolean to search through the entire array for matching input
    bool matchFound = false;    

    // Collect username input to compare
    cout << "Enter your username:" << endl;
    getline(cin, str_input);
    cout << "You entered: " << str_input << endl;

    // Loop through the array and find a match
    for (int i = 0; i < 3; i++) {
        if (str_input == fullName[i]) {
            matchFound = true;
            break;
        }
    }

    // If a match is not found then cout an error message
    // Else a match is found then print out a message with a random number far pin access
    if (!matchFound) {
        cout << "Incorrect username. Please enter the username as it appears on your work ID" << endl;
        
    }
    else {
        cout << "Your one time pass use passcode is: " << time(0) << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


