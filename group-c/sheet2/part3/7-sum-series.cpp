// 7. Write a Program to find Sum of this series up to ‘N’ terms. Series: 1+2+4+7+11+16+……….. .Take the number ‘N’ as input from the user
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 1, d = 0;

    cout << "Enter the number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << sum;
        d = d + sum;
        sum = sum + i;
        cout << " ";
    }
    cout << "\nResult " << d;
    return 0;
}
