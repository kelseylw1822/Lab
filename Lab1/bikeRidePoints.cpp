// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 01/22/2025
// Desc:
// Time:

#include <iostream>
using namespace std;

int main()
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
    
    if (rides == 0)
    {
        points = 0;
        cout << "You earned " << points << " this semester";
    }
    else if (rides == 1)
    {
        points = 3;
        cout << "You earned " << points << " this semester";
    }
    else if (rides == 2)
    {
        points = 10;
        cout << "You earned " << points << " this semester";
    }
    else if (rides == 3)
    {
        points = 15;
        cout << "You earned " << points << " this semester";
    }
    else if (rides == 4)
    {
        points = 30;
        cout << "You earned " << points << " this semester";
    }
    else if (rides >= 5)
    {
        points = 50;
        cout << "You earned " << points << " this semester";
    }

    return 0;
}
