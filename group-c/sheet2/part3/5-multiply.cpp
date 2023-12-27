// 5. Write a Program to multiply two numbers without using multiplication(*) operator

#include<iostream>
using namespace std;
int main()
{
int num1,num2,result = 0;
cout<<"Enter the numbers ";
cin>>num1>>num2;
int i=1;
for(i=1;i<=num2;i++){

result = result + num1 ;
}
cout<<" Result " <<result;
return 0;
}