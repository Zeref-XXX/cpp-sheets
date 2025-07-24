#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    // Eucledian

    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main()
{
    int num1, num2;
    cout << "ENter the numbers separated by space :";
    cin >> num1 >> num2;

    cout<<"GCD : "<<gcd(num1,num2)<<endl;
}