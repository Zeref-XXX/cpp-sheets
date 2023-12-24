// 16. Write a C++ program to take two numbers ‘a’ and ‘b’ as input and return |a-b| where |x| is absolute value of x.

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the x and y :";
    cin >> x >> y;
    cout << endl
         << x << " - " << y << " : " << abs(x - y);
    return 0;
}