// 8. Write a program to input a two digit number and print its LSB.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number ";
    cin >> num;
    if (num % 2 == 0)
        cout << " 0 ";
    else
        cout << " 1 ";
    return 0;
}