// 7. Write a program to find the sum of First ‘N’ natural numbers Using While() Loop and wihout using any Loop

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int number,sum=0;

cout<<"Enter the number ";
cin>>number;

while(number>0){
    sum = sum + number;
    number--;
}

cout<<" Result "<<sum;
return 0;
}