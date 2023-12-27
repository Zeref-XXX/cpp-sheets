// 11.Write the following using if-else statement 
// x +=a<b ? (-x) :100;
#include<iostream>
using namespace std;
int main()
{
    int a,b,x=1;
    cout<<"Enter the a b and x";
    cin>>a>>b;
    if(a<b){
        x += -x;
    }
    else
     x =100;
return 0;
}