#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter :" << endl;
    cin >> a >> b;
    cout << "a = : " << a << endl
         << "b = " << b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << endl
         << "a = : " << a << endl
         << "b = " << b;
    return 0;
}