//
//  main.cpp
//  Die Roller
//
//  Created by Brent Perry on 8/31/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    
    srand(static_cast<unsigned int>(time(0))); // seed random number generator
    int randomNumber = rand(); // generate random number
    int die = (randomNumber % 6) + 1; // get a number between 1 and 6
    cout << "You rolled a " << die << endl;
    
    return 0;
}
