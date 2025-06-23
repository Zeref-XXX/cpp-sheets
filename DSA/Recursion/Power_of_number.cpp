#include <bits/stdc++.h>
using namespace std;

int powerOf(int num,int pow){
    
    if(pow<1) return 1;

    return num*powerOf(num,pow-1);
}

int main()
{
    int num, power;
    cout << "enter the number : ";
    cin >> num;
    cout << "To the power : ";
    cin >> power;

    cout << num << " power of " << power << ": " << powerOf(num, power)<<endl;
}