// 6. Write a Program to find greatest among 4 using if-else

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter the numbers : ";
    cin >>a>>b>>c>>d;
    cout<<"\n a b c d "<<a<<b<<c<<d<<endl;
    if (a > b && a > c && a > d)
    {
        cout << " A ";
    }
    else if (b > c && b > d)
    {
        cout << " B ";
    }
    else if (c > d)
    {
        cout << " C ";
    }
    else
        cout << " D ";
    return 0;
}