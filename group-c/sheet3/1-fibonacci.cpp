// 1. What is Fibonacci Sequence. REFER :  https://byjus.com/maths/fibonaccisequence/ .Write a program to print the Fibonacci Series up to ‘N’ terms. Take the number ‘N’ as input

#include <iostream>
using namespace std;
int main()
{
    int number, t1 = 0, t2 = 1, nxt;
    cout << "Enter the number ";
    cin >> number;
    nxt = t1 + t2;
    cout << "series " << t1 << " " << t2;
    for (int i = 3; i <= number; i++)
    {
        // cout<<"-series-"<<t1<<t2<<nxt;
        t1 = t2;
        t2 = nxt;
        nxt = t1 + t2;
        cout << " " << nxt;
    }
    return 0;
}