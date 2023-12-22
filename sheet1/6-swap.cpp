// Write a C++ program to swap value of two variables:
// —> Using third Variable.

#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter the vale of a and b" << endl;
    cin >> a >> b;
    cout << "a = " << a << endl
         << "b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << end << "b = " << b << endl;
    return 0;
}