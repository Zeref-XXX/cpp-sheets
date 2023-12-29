// 8. What is Perfect Number. REFER: https://byjus.com/maths/perfect-numbers/ Write a Program to find whether a Number is Perfect or not.
#include <iostream>
using namespace std;
int main()
{
    int number, divisor, sum = 0;
    cout << "Enter the number: ";
    cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
    {
        cout << " Perfect: " << sum;
    }
    else
        cout << "Not Pefect ";

    return 0;
}
