// O. Calculator
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given a mathematical expression. The expression will be one of the following expressions: A+B
// , A−B
// , A∗B
//  and A/B
// .

// Print the result of the mathematical expression.
// Input
// Only one line contains A,S //  and B
//  (1≤A,B≤104)
// , S
//  is either (+,−,∗,/)
// .

// Output
// Print the result of the mathematical expression.

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    char s;
    cin>>a>>s>>b;
    
    switch(s){
    case '+':   cout<<a+b;break;
    case '-':   cout<<a-b;break;
    case '/':   cout<<a/b;break;
    case '*':   cout<<a*b;break;

    }
    return 0;
}