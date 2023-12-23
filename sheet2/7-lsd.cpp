// 7. Write a program to input a two digit number and print its LSD
// the rightmost nonzero digit is the least significant digit.

#include <iostream>
using namespace std;
int main()
{
    int num,lsd;
    cout << "Enter the number : ";
    cin >> num;

    while (num > 10)
    {
        num = num % 10; 
        cout << "\nnum "<<num;
        lsd = num;
    }
    cout << " least significant digit :" << lsd;
    return 0;
}