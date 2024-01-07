// 1. Write a program in C++ that reads n integer values from the keyboard and searches for an integer value taken from the user.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, search;
    cout << "Enter the number of values ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the values " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the value for searching ";
    cin >> search;
    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            result = i + 1;
            break;
        }
    }

    cout << result;
    return 0;
}