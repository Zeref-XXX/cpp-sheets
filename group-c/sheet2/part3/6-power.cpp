// 6. Write a Program to compute X^n using pow() and without using pow(). Where X and n are input from User.
#include<iostream>
using namespace std;
int main()
{
int num,pow,ans=1;
cout<<"Enter the number : ";
cin>>num;
cout<<"Enter the power :";
cin>>pow;

for(int i=1;i<=pow;i++){
ans = ans*num;
}
cout<<"Result : "<<ans;
return 0;
}