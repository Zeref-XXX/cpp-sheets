// 5. Study about Greatest Common Divisor. REFER: https://byjus.com/maths/greatest-common-divisor/#:~:text=The%20greatest%20common%20divisor%20

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, gcd;
    cout << "Enter the num1 and num2 ";
    cin >> num1 >> num2;
    int count = 0;
    if (num1 < num2)
        count = num1;
    else
        count = num2;
    // cout << " " << count;
    cout << "Factors ";
    for (int i = 1; i < count; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << " " << i;
            gcd = i;
        }
    }
    cout << "\nGCD" << gcd;
    return 0;
}