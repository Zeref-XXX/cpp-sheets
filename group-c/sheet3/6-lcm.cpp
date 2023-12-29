// 6. Study about Least Common Multiples. REFER: https://byjus.com/maths/lcm/#:~:text=In%20Mathematics%2C%20the%20LCM%20of,called%20the%20divisors%20of%2020
// LCM (a,b) = (a x b)/GCD(a,b)

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, lcm = 1,gcd;
    cout << "Enter the num1 and num2 : ";
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
            gcd = i;
        }
    }
    lcm = (num1*num2)/gcd;
    cout<<" LCM: "<<lcm;
    return 0;
}