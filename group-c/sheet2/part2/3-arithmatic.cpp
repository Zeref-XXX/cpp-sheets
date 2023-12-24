// 3. Write a program to display various type or arithmetic operation using mixed data type. In other words you have to use all basic arithmetic operators to show useful result.
#include <iostream>
#include "3-arithmatic.h"
using namespace std;

add()
{
    int a, b;
    cout << "Enter the number ";
    cin >> a >> b;
    cout << "Sum = " << a + b;
}
sub()
{
    int a, b;
    cout << "Enter the number ";
    cin >> a >> b;
    cout <<"Subtract = " << a - b;
}
mul()
{
    int a, b;
    cout << "Enter the number ";
    cin >> a >> b;
    cout << "Multiply = " << a * b;
}
div()
{
    float a, b;
    cout << "Enter the number ";
    cin >> a >> b;
    cout << "Division = " << a / b;
}
int main()
{
    int option;
    cout << "Choose the operation to perform\n1.Sum \n2.Subtract \n3.Multiply \n4.Division ";
    cin >> option;
    switch (option)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    default:
        cout << "Invalid";
    }
    return 0;
}
