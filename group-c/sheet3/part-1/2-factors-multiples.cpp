// 2. What is Factors and Multiples ? REFER: https://byjus.com/maths/factors-and-multiples/#:~:text=A%20factor%20is%20a%20number,given%20number%20with%20other%20numbers

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number ";
    cin >> number;
    cout << "Factors   : ";
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << " " << i;
        }
    }
    cout << "\nMultiples :";
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << number * i;
    }
    return 0;
}