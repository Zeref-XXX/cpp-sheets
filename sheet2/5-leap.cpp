// 6.Write a Program to check whether a Year is Leap or not.

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter the year :";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "leap year";
    }
    else if (year % 400 == 0)
    {
        cout << "leap year";
    }
    else
        cout << "Not leap year";
    return 0;
}