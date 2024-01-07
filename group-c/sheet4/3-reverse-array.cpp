// 3. Write a program to reverse all elements of an array. (use a single array only.)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elemnets ";
    cin >> n;
    int temp, index = n - 1;
    char c[n];
    cout << " Enter the characters ";
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        temp = c[i];
        c[i] = c[index - i];
        c[index - i] = temp;
    }
    cout<<"output array is ";
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}