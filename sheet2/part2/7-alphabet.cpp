// 7. Write a program to enter a character and check whether it is alphabet or not. NOTE: Alphabet can be small or capital.
#include <iostream>
using namespace std;
int main()
{
    char c;
    int a;

    cout << "Enter a Alphabet ";
    cin >> c;
    a = (int)c;
    cout << "\n"
         << c << " Ascii value is " << a;
    for (int i = 65; i <= 90; i++)
    {
        if (i == a)
        {
            cout << "Capital";
        }
    }
    for (int i = 97; i <= 122; i++)
    {
        if (i == a)
        {
            cout << " Small";
        }
    }
    return 0;
}