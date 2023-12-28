// 3. Write a Program to input a Number ‘N’. If the number is even, check whether the number is divisible by 6. And if the number is odd, check whether the number is divisible by 3.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;

    if (num % 2 == 0)
    {
        if (num % 6 == 0)
            cout << "Divisible by 6";
        else
            cout << "Not divisible by 6";
    }
    else if (num % 3 == 0)
        cout
            << "Divisible by 3";
    else
        cout << "Not divisible by 3";
        return 0;
}