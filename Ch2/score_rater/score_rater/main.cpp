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
    int score;
    cout << "Enter your score: ";
    cin >> score;
    
    if (score >= 1000)
    {
        cout << "You score 1000 or more. Impressive!\n";
    }
    else
    {
        cout << "You score less than 1000.\n";
    }
    
    return 0;
}
