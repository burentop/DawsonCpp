//
//  main.cpp
//  Guess My Number
//
//  Created by Brent Perry on 8/31/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0))); // seed random number
    
    cout << "\tWelcome to Guess My Number\n\n";
    
    int userNumber;
    cout << "Enter a number between 1 - 100 for the computer to guess: ";
    cin >> userNumber;
    
    int tries = 0;
    int guess;
    
    do
    {
        guess = rand() % 100 + 1;       // random number between 1 and 100
        ++tries;
        cout << "The computer guesses " << guess << ".\n";
        
        if (guess > userNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < userNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\nThat's it! The computer guessed it in " << tries << " guesses!\n";
        }
    } while (guess != userNumber);
    
    return 0;
}
