// 17. Write a C++ program to divide two numbers ‘a’ and ‘b’ and print the Greatest Integer Value and Smallest Integer Value. Hint : Greatest Integer Value is called FLOOR value and Smallest Integer is called CEIL value

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "enter the value a and b ;";
    cin >> a >> b;
    cout << endl
         << a / b << endl;
    cout << "Floor of " << a << "/" << b << " : " << floor(a / b) << endl;
    cout << "Ceil of " << a << "/" << b << ": " << ceil(a / b) << endl;

    return 0;
}