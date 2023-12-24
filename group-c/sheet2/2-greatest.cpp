// 2. Write a program to find greatest of 3 numbers using if-else, max() and ternary operator. Write separate programs and observe difference in each.
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the numbers ";
    cin >> a >> b >> c;
    cout << "Min " << min(a, min(b, c)) << endl;
    cout << "Max " << max(a, min(b, c)) << endl;
    return 0;
}