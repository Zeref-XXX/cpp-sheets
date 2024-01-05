// 4. Divide a Number by 2 without using any arithmetic operator.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number=4,num;
    cout << " Enter the number ";
    cin >> number;
    num = number >>1 ;
    cout<<number <<" / 2 : "<<num;
    return 0;
}