// . Area of a Circle
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given a number R calculate the area of a circle using the following formula:

// Area = π * R2.

// Note: consider π = 3.141592653.

// Input
// Only one line containing the number R (1  ≤  R  ≤  100).

// Output2
// Print the calculated area, with 9 digits after the decimal point. //12.566370612

#include <iomanip>
#include <ios>
#include<iostream>
using namespace std;
// #define pi 3.141592;
int main(){
    double r,a,pi=3.141592653;
    cout<<"enter  ";
    cin>>r;
    a=pi*r*r;
    cout<<setprecision(11);
    cout<<a;
    return 0;
}