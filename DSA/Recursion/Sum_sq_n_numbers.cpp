#include <bits/stdc++.h>
using namespace std;


int Sum_Sq(int n){
    if(n==0 ) return 0;

    return n*n + Sum_Sq(n-1);
}
int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;

    cout<<" Result : "<<Sum_Sq(num)<<endl;

}