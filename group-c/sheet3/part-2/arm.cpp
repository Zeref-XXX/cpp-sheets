#include <bits/stdc++.h>
using namespace std;

int power(int number, int digits)
{
    int mul = 1;
    for (int i = 1; i <= digits; i++)
    {
        mul = mul * number;
    }
    return mul;
}

int main()
{
    int number = 231, digit = 0, result;
    int temp = number;

    while (temp > 0)
    {
        temp /= 10;
        digit++;
    }
    temp = number;
    int sum = 0;
    while (temp > 0)
    {
        int rem;
        rem = temp % 10;
        sum = sum + power(rem, digit);
        temp = temp / 10;
    }

    if (sum == number)
        cout << "armstrong";
    else
        cout << "not";
    return 0;
}