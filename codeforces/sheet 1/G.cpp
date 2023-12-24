// G. Summation from 1 to N
// time limit per test0.25 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given a number N
// . Print the summation of the numbers that is between 1 and N
//  (inclusive).

// .∑i=1Ni
// Input
// Only one line containing a number N
//  (1≤N≤109)
// Output
// Print the summation of the numbers that are between 1 and N
//  (inclusive).

#include<iostream>
using namespace std;
 int main(){
    long long n,sum=0;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum += i;
    // }
    cout<<n*(n+1)/2;
    return 0;
 }