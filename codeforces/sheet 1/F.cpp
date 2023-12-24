// F. Digits Summation
// time limit per test0.25 seconds
// memory limit per test64 megabytes
// inputstandard input
// outputstandard output
// Given two numbers N and M. Print the summation of their last digits.

// Input
// Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

// Output
// Print the answer of the problem.
#include<iostream>
using namespace std;

int main(){
    long long a,b,r;
    cin>>a>>b;
    a = a%10;
    b = b%10;
    r = a+b;
    cout<<r;
}