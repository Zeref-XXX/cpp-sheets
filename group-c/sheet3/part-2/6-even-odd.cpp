// 6. Write a program to check even or odd without modulus and bitwise operator.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int number,n;
cout<<"Enter the number : ";
cin>>number;
n=number;
if((number/2)*2==n)
cout<<"Even";
else
cout<<"Odd";
return 0;
}