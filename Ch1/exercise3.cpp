// Exercise 1-3
// Gather 3 scores from the user, and display the average

#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3, avg;

    cout << "Please enter your highest score in Tetris: ";
    cin >> score1;
    cout << endl;
    cout << "Now enter your next highest: ";
    cin >> score2;
    cout << endl;
    cout << "And, finally, enter your 3rd highest: ";
    cin >> score3;
    cout << endl;

    avg = (score1 + score2 + score3) / 3;
    cout << "The average of your top 3 scores is: " << avg << endl;

}