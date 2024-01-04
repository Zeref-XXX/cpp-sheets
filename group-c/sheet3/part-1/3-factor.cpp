// 3. Write a program to find all the factors of a given Number ‘N’. Take the number as input.

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "\nFactors of " << number << ": ";

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << " " << i;
        }
    }

    return 0;
}