#include "compoundCalc.h"
#include <cmath>

using namespace std;

double compoundCalc(double principalValue, double interestRate, int year) {
    return principalValue * pow((1 + interestRate), year);
}
