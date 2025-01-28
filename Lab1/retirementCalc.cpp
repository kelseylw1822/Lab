// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 01/22/2025
// Desc: Based on user input, calculates their retirement savings.
// Time: Just under 10 minutes

#include "compoundCalc.h"
#include <iostream>
#include <iomanip>
using namespace std;

int savings() {
    double principal, rate;
    int time;

    cout << "Enter the principal amount (P): ";
    cin >> principal;
    cout << "Enter the interest rate as a decimal (r): ";
    cin >> rate;
    cout << "Enter the number of years (t): ";
    cin >> time;

    double retiresavings = compoundCalc(principal, rate, time);

    cout << "Your retirement savings will be $" << fixed << setprecision(2) << retiresavings << endl;

    return 0;
}






