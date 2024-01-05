// 8. Write a program to find the sum of first ‘N’ odd natural numbers without Loop.


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int terms,n=1,sum=1;
cout<<"Enter the number of terms ";
cin>>terms;

while(terms>1){
    n=n+2;
    sum +=n;
    terms--;
}


cout<<" "<<sum;
return 0;
}