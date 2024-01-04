// 1. Study about Narcissistic/Armstrong Numbers. REFER : https://u-next.com/blogs/data-science/what-is-armstrong-number/ Write a Program to find whether a Number is Armstrong or Not.
#include <iostream>
using namespace std;
int count(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int mul(int x, int power)
{
    int ans = 1;
    for (int i = 0; i <power; i++)
    {
        ans *= x;
   }
    return ans;
}
int main()
{
    int number, power, sum = 0, r = 0;
    number = 153;
    int temp = number;
    power = count(number); /// digits
    cout<<"digits "<<power<<" ";
    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + mul(r, power);
        temp = temp/10;
    }
    cout <<  "\n"<< sum;
    if(sum == number)
    cout<<"  Armstrong ";
    else
    cout<<" Not Armstrong ";
    return 0;
}