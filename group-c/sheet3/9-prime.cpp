// 9. Study about Prime Numbers. REFER : https://byjus.com/prime-numberformula/. Write a Program to find whether a Number is Prime or Not.

#include<iostream>
using namespace std;
int main()
{
int number,prime=0;
cout<<"Enter the number: ";
cin>>number;
for(int i=2;i<number;i++){
    if(number%i==0){
        prime = 1;
    }
}
if(prime==0)
cout<<" Prime";
else
cout<<" Not Prime";
return 0;
}