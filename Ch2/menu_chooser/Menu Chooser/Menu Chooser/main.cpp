//
//  main.cpp
//  Menu Chooser
//
//  Created by Brent Perry on 8/31/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Difficult Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";
    
    enum difficulty {SKIP, EASY, NORMAL, HARD};
    
    int choice;
    cout << "Choice: ";
    cin >> choice;
    
    switch (choice)
    {
        case EASY:
            cout << "You picked Easy.\n";
            break;
        case NORMAL:
            cout << "You picked Normal.\n";
            break;
        case HARD:
            cout << "You picked Hard.\n";
            break;
        default:
            cout << "You made an illegal choice.\n";
    }
    
    return 0;
}
