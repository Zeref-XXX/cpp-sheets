// 2. Write a Program to Divide two numbers taken as input and print the Quotient and Remainder.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter the numbers " << endl;
    cin >> num1 >> num2;
    cout << "Quotient : " << num1 / num2 << endl;
    cout << "Remainder : " << num1 % num2;

    return 0;
}