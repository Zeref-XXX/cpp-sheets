// H. Two numbers
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Given 2 numbers A
//  and B
// . Print floor, ceil and round of A/B

#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long n1,n2;
    cin>>n1>>n2;

    cout<<"floor "<<n1<<" / "<<n2<<" = "<<floor((float)n1/(float)n2)<<endl;
    cout<<"ceil "<<n1<<" / "<<n2<<" = "<<ceil((float)n1/(float)n2)<<endl;
    cout<<"round " <<n1<<" / "<<n2<<" = "<<round((float)n1/(float)n2)<<endl;
    return 0;

}