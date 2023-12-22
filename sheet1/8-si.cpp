// 8. Write a Program to calculate Simple Interest.
#include <iostream>
using namespace std;
int main()
{
    float p, r, t, si;
    cout << "Enter the  P , R , T ";
    cin >> p >> r >> t;
    si = p * r * t / 100;

    cout << endl
         << si;
    return 0;
}