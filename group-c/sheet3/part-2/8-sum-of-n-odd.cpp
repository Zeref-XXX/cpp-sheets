// 8. Write a program to find the sum of first ‘N’ odd natural numbers without Loop.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int oddsum(int term)
{
    if (term == 0)
        return 0;
    else
        return ((2 * term - 1) + oddsum(term - 1));
}

int main()
{
    int terms, n = 1, sum = 0;
    cout << "Enter the number of terms ";
    cin >> terms;
    sum = oddsum(terms);
    cout << " " << sum;
    return 0;
}