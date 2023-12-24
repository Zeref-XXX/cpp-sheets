// Given a number N. Print the factorial of number N.

// Input
// First line contains a number T (1 ≤ T ≤ 15) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 20)

// Output
// For each test case print a single line contains the factorial of N.

#include<stdio.h>

int main(){
    int t,n,fact=1;
    scanf("%d",&t);
    int n[t];
    for(int i=0;i<n;i++){
        scanf("%d",&n[i]);
    }
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("%d",fact);
}