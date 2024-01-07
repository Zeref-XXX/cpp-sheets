// 9. Write a Program to find the product of first ‘N’ natural Numbers.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int product(int n)
// {
//     int r;
//     r = r*product(n-1);
//     cout<<"product";
//     return r;
// }

int main()
{
    int n, result=1;
    cout << "Enter the number of terms ";
    cin >> n;

    while(n>0){
        result=result*n;
        n--;
    }
    cout<<"product "<<result;
    return 0;
}