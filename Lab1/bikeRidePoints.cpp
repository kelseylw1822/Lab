// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 01/22/2025
// Desc: Based on user input, prints out the total amount of points they received 
// Time: About 10 minutes

#include <iostream>
using namespace std;

int bike()
{
    int rides;
    int points;
    
    cout << "Enter the number of bike rides you took to campus: ";
    cin >> rides;
    
    while(rides < 0)
    {
        cout << "Invalid input. Please try again: ";
        cin >> rides;
    }
    
    switch(rides)
    {
        case 0:
            points = 0;
            break;
        case 1:
            points = 3;
            break;
        case 2:
            points = 10;
            break;
        case 3:
            points = 15;
            break;
        case 4:
            points = 30;
            break;
        default:
            points = 50;
            break;
    }
    
    cout << "You earned " << points << " points this semester" << endl;

    return 0;
}
