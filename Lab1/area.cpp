// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 01/22/2025
// Desc: Calculate the area of a square, circle, or right triangle based on user input
// Time: About 10 minutes

#include <iostream>
#include <iomanip>
using namespace std;
int areaCalc()
{
    const double PI = 3.14159;

    int input;
    double area, sidelength, radius, base, height;
    cout << "Program to calculate areas of objects\n1 -- square\n2 -- circle\n3 -- right triangle\n4 -- quit" << endl;
    cin >> input;

    if (input == 1) {
        cout << "Side length of the square: ";
        cin >> sidelength;
        area = sidelength * sidelength;
        cout << "Area = " << fixed << setprecision(2) << area << endl;
        return 0;
    }
    else if (input == 2) {
        cout << "Radius of the circle: ";
        cin >> radius;
        area = (radius * radius) * PI;
        cout << "Area = " << fixed << setprecision(2) << area << endl;
        return 0;
    }
    else if (input == 3) {
        cout << "Base of the triangle: ";
        cin >> base;
        cout << "Height of the triangle: ";
        cin >> height;
        area = (base * height)/2;
        cout << "Area = " << fixed << setprecision(2) << area << endl;
        return 0;
    }
    else if (input == 4) {
        return 0;
    }
    else {
        cout << "You entered an invalid choice. Good bye!" << endl;
        return 0;
    }
}
