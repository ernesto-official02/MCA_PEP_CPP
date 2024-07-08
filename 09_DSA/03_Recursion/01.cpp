/*Recusion happens when a function calls itself


if a solution of a problem depends on a smaller problem of type , then we will use recursion
*/

#include<iostream>
using namespace std;


double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else if (exponent < 0) {
        return 1 / power(base, -exponent);
    }
    else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout<< result <<endl;
    return 0;
}
