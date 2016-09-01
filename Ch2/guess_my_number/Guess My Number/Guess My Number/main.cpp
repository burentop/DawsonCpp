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
    
    int secretNumber = rand() % 100 + 1;       // random number between 1 and 100
    int tries = 0;
    int guess;
    
    cout << "\tWelcome to Guess My Number\n\n";
    
    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        ++tries;
        
        if (guess > secretNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low!\n\n";
        }
        else
        {
            cout << "\nThat's it! You got it in " << tries << " guesses!\n";
        }
    } while (guess != secretNumber);
    
    return 0;
}