// 4. Write a program to print the multiplication table of a number ‘N’ from 1 to 10. Take the number ‘N’ as input.

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    cout << "\nMultiplication Table of: " << number << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " X " << i << ": " << number * i << endl;
    }
    return 0;
}