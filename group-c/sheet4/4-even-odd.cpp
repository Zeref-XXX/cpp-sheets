// 4. Write a program to read n integer from the keyboard and display even numbers and odd numbers separately.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of integers ";
    cin >> n;
    int arr[n];
    cout << "Enter the integers ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"even ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout<<"\nodd ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}