//
//  main.cpp
//  score_rater
//
//  Created by Brent Perry on 8/31/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    if (true)
    {
        cout << "This is always dispayed.\n\n";
    }
    
    if (false)
    {
        cout << "This is never displayed.\n\n";
    }
    
    int score = 1000;
    
    if (score)
    {
        cout << "At least you didn't score zero.\n\n";
    }
    
    if (score >= 250)
    {
        cout << "You score 250 or more. Decent.\n\n";
    }
    
    if (score >= 500)
    {
        cout << "You scored 500 or more. Nice.\n\n";
        if (score >= 1000)
        {
            cout << "You scored 1000 or more. Impressive!\n";
        }
    }
    
    return 0;
}
