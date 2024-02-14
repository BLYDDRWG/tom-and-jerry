// Frank Jones fj1009@txstate.edu
//  main.cpp
//  CS 1428 lab 3, 2/16/24.

//  main.cpp
//  tom and jerry

/*Description: this program will allow the user to play
Tom-And-Jerry game against a randomized computer opponent*/

//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand((unsigned)time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Tom-And-Jerry Game" << endl
         << " 1. Spike" << endl
         << " 2. Tom" << endl
         << " 3. Jerry" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;
    
    // user winning inputs
    if (user_num == 1 && comp_num == 2) {
        cout << "Spike beats Tom! You Won!\n";
    }
    else if (user_num == 2 && comp_num == 3) {
        cout << "Tom beats Jerry! You Won!\n";
    }
    else if (user_num == 3 && comp_num == 1) {
        cout << "Jerry beats Spike! You Won!\n";
    }
    // user and comp tie
    else if (user_num == comp_num) {
        cout << "You Tied!\n";
    }
    //comp wins
    else if (comp_num == 1 && user_num == 2) {
        cout << "Spike beats Tom! You Lose!\n";
    }
    else if (comp_num == 2 && user_num == 3) {
        cout << "Tom beats Jerry! You Lose!\n";
    }
    else if (comp_num == 3 && user_num == 1) {
        cout << "Jerry beats Spike! You Lose!\n";
    }
    else if (user_num > 3) {
        cout << "ERROR - Invalid Input. Terminating Program. \n";
    }
        //TODO: Determine if the user wins, loses, or ties
        //(or enters invalid input):
    

    // Exit the program:
    return 0;
}
