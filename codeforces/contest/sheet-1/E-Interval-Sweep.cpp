#include <bits/stdc++.h>
using namespace std;
int main()
{
    long a, b;
    cin >> a >> b;
    if (b == a + 1)
        cout << "YES";
    else if (a == b + 1)
        cout << "YES";
    else if(a==b&&(a!=0||b!=0))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}