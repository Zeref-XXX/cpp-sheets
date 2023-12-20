// precedence rule

// * / % + - () [] -> . ++ - -

#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 4, c = 2, d = 1, e = 5, f = 20, r;

    r = a + b - (c + d) * 3 % e + f / 9;
    cout << r;
    return 0;
}