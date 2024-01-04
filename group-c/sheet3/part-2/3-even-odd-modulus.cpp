// 3. Check whether a Number ‘N’ is odd or even without using Modulus(%) operator

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int number;
cout<<"Enter the Number ";
cin>>number;

if(number&1==0){
    cout<<"Even ";
}
else
cout<<"Odd ";

cout<<" "<<number;
return 0;
}