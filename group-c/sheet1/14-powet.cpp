// 14. Write a program to compute X^n where X and n are integers taken as input.
#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter the number: ";
    cin >> x;
    cout << endl
         << "Enter the power : ";
    cin >> n;
    cout << endl
         << x << " To the Power is " << n;
    int i = 1, r = x;

    for (i = 1; i < n; i++)
    {
        r = r * x;
    }
    cout << " : " << r;
    return 0;
}