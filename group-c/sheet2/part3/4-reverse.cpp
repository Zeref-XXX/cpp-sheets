// 4. Write a Program to print the numbers starting from ‘N’ in reverse order with difference by 2. Take input ‘N’ from the user
#include <iostream>
using namespace std;
int main()
{
    int num, rem = 0, rev = 0;
    cout << "Enter the number ";
    cin >> num;

    while (num >= 1)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << "reverse : " << rev;
    return 0;
}