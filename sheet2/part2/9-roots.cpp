// Write a Program to take the coefficients of a Given quadratic Equation as input and Calculate its roots(may be Real and May be Complex). 
// x^2-2x+1 , x^2-x-1
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"Enter the coefficient of x^2"<<endl;
cin>>a;
cout<<"Enter the coefficient of x"<<endl;
cin>>b;
cout<<"Enter the coefficient of c"<<endl;
cin>>c;
d=b*b-4*a*c;
if(d==0||d>0){
    cout<<"roots "<<(-b+sqrt(d))/2*a;
    cout<<"\nroots "<<(-b-sqrt(d))/2*a;
}
if(d<0){
    cout<<"Imaginary roots";
}
return 0;
}