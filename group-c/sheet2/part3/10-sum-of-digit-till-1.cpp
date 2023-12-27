// 10. Write a Program to calculate Sum of digits of a Number until sum is Reduced to only 1 digits. For example: if N = 538769 → 38 → 11 → 2, -final output will be 2.
#include <iostream>
using namespace std;
int sumnum(int num)
{
    int sum = 0, rem = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = rem + sum;
        num = num / 10;
    }
    cout << " __ ";
    return sum;
}
int main()
{
    int num, sum = 0;
    cout << "Enter the number ";
    cin >> num;
    num = num * 10;
    sum = sumnum(num);
    while (sum > 10)
    {
        sum = sumnum(sum);
    }
    cout << "\nsum " << sum;
    return 0;
}