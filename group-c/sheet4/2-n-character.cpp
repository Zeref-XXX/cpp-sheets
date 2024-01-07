// 2. Write a program in C++ that reads n character values from the keyboard and copies all the elements in another array but in reverse order

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of character ";
    cin >> n;
    char c[n], rev[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i + 1 << " ";
        cin >> c[i];
    }
    int count = 0 ;
    for (int i = n - 1; i  >= 0; i--, count++)
    {
       rev[count]=c[i];
    }
    for (int i = 0; i<n; i++)
    {
        cout << "\n"<< rev[i];
    }

    return 0;
}