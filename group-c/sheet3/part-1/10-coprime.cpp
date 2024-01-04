// 10. Study about co-prime Numbers. REFER : https://byjus.com/maths/co-prime-numbers/#:~:text=Q1-,What%20are%20Co%2Dprime%20Numbers%3F,common%20factor%20other%20than%201. Write a Program to Check whether two numbers are co-prime. Take two Numbers as Input

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, count, cp = 0;
    cout << "Enter the num1, num2: ";
    cin >> num1 >> num2;
    if (num1 < num2)
        count = num1;
    else
        count = num2;
    for (int i = 2; i < count; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cp = 1;
        }
    }
if (cp == 0)
    cout << "Co-Prime";
else
    cout << "Not Co-Prime";
return 0;
}
