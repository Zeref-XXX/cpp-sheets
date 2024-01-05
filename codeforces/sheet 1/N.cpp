// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
// Note : difference between 'a' and 'A' in ASCII is 32 
// Input
// Only one line containing a character X which will be a capital or small letter.
// Output
// Print the answer to this problem.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
char ch;
cin>>ch;
if(ch>='A' && ch<='Z'){
   ch = ch+32;  
}
else
  ch = ch-32;
  cout<<ch;
return 0;
}