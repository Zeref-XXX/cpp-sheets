// ***______***sssss
#include <iostream>
using namespace std;
int main()
{
    int a = 8, b = 3, c = 2, d = 3, e = 3, f = 11;

    float r = a - b || (a - b * c) + d && e - f % 3;

    cout << r;
    return 0;
}