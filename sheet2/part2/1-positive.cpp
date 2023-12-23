// 1 . Write a program to print “Jai Hind” when positive number is entered, “Jay Jawan” when zero is entered, and “Jai Kisan” when a negative number is entered.
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number ";
    cin >> number;
    if (number > 0)
        cout << "Jai Hind";
    else if (number < 0)
        cout << "Jai Kisan";
    else
        cout << " Jay Jawan";
    return 0;
}