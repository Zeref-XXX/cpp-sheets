// Program to find Greater of 2 numbers taken as input using Ternary Operator.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the two numbers : ";
    cin >> a >> b;
    a > b ? cout << "a bigger " : cout << "b is bigger ";

    return 0;
}