// 8. Write a Program to Count Digits of a Number

#include <iostream>
using namespace std;
int main()
{
    int num, count = 1;
    cout << "ENter the number - ";
    cin >> num;
    while (num > 10)
    {
        num = num/10;
        count++;
    }
    cout<<" Digits : "<<count;

    return 0;
}