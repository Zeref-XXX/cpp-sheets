#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin>>a>>b>>c;
        if (a == b)
            cout << c<<endl;
        else if (a == c)
            cout << b<<endl;
        if (b == c)
            cout << a<<endl;
    }
    return 0;
}