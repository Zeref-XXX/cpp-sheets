// 9. Write Algorithm to find Sum and Product of Digits of a number. Code the same algorithm along with.
#include <iostream>
using namespace std;
int main()
{
    int num, rem = 0, sum = 0, product = 1;
    cout << "Enter the number ";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        sum = rem + sum;
        num = num / 10;
        product = product * rem;
    }
    cout << "\nSum " << sum;
    cout << "\nproduct " << product;
    return 0;
}