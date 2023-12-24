// 4. Write a menu driven program to convert temperature in
// a. Celsius to Fahrenheit
// b. Fahrenheit to Celsius.

#include <cmath>
#include <bits/stdc++.h>
using namespace std;
float c = 0, f = 0;
void ctof()
{
    cout << " Enter the temp in C :";
    cin >> c;
    f = c * 9 / 5 + 32;
    cout << " Enter the temp in C : " << f;
}
void ftoc()
{
    cout << "Enter the temp in F ";
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << " Enter the temp in F  : " << c;
}
int main()
{
    int option;
    cout << "Choose the option \n 1. C to F \n 2. F to C ";
    cin >> option;
    cout << option;
    switch (option)
    {
    case 1:
        ctof();
        break;
    case 2:
        ftoc();
        break;
    default:
        cout << " Invalid ";
    }
    return 0;
}
