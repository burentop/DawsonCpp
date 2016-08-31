//
//  main.cpp
//  Play Again
//
//  Created by Brent Perry on 8/31/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    char again;
    
    do
    {
        cout << "\n** Played an exciting game **";
        cout << "\nDo you want to play again? (y/n): ";
        cin >> again;
    } while (again == 'y');
    
    cout << "\nOkay, bye.";
    
    return 0;
}
