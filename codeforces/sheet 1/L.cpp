// L. The Brothers
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given two person names.
// Each person has {"the first name" + "the second name"}
// Determine whether they are brothers or not.
// Note: The two persons are brothers if they share the same second name.
// Input
// First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.
// Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.
// Output
// Print "ARE Brothers" if they are brothers otherwise print "NOT".
#include<bits/stdc++.h>
using namespace std;
int main(){
    string f1,s1,f2,s2;
    cin>>f1>>s1;
    cin>>f2>>s2;
    if(s1==s2){
        cout<<"ARE Brothers";
    }
    else
    cout<<"NOT";
    return 0;
}
