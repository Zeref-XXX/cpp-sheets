// D. Difference
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D).

#include<iostream>
using namespace std;

int main(){
   long long a,b,c,d,x;
    cin>>a>>b>>c>>d;
    x=(a*b)-(c*d);
    cout<<"Difference = " <<x;

}