// I. Welcome for you with Conditions
// time limit per test1 second
// memory limit per test64 megabytes
// inputstandard input
// outputstandard output
// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

// Input
// Only one line containing two numbers A and B (0  ≤  A, B  ≤  100).

// Output
// Print "Yes" or "No" according to the statemen

#include<iostream>
using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<"Yes";
    }
    else
    cout<<"No";

    return 0;
}