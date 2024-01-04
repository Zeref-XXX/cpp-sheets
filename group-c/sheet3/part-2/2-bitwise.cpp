#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=2,b=3,c=0;//a = 10   
c=a&&b;          //b = 11
cout<<"bitwise and  "<< c;//
c=a||b;
cout<<"\nbitwise or "<< c;
c=~a;
cout<<"\nbitwise not "<< c;

return 0;
}