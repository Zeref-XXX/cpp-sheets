// 15. Write a C++ program to find maximum and minimum between two Numbers using max() and min() functions.
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the numbers :";
    cin >> a >> b;
    cout << endl
         << "Max : " << max(a, b);
    cout << endl
         << "Min : " << min(a, b);
    return 0;
}