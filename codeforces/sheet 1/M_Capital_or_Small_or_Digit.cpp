// M. Capital or Small or Digit
// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
// Note:
// Digits in ASCII '0' = 48,'1' = 49 ....etc
// Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
// Small letters in ASCII 'a' = 97,'b' = 98 ....etc
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    if (c >= 'a' && c <= 'z')
    {
        cout << "ALPHA\nIS SMALL";
    }
    if (c >= '0' && c <= '9')
    {
        cout << "IS DIGIT";
    }
    return 0;
}