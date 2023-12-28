// 6. Write a Program to determine whether a Given date is valid or not ?
#include <iostream>
using namespace std;
const int MAX_YR = 9999;
const int MIN_YR = 1000;
bool isleap(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool isValidDate(int d, int m, int y)
{

    if(y<MIN_YR || y>MAX_YR){
        return false;
    }
    if ((d < 1 || d > 31) || (m < 1 || m > 12))
        return false;
    if (m == 2)
    {
        if (isleap(y))
        {
            return (d <= 29);
        }
        else
            return (d <= 28);
    }
    if (m == 4 || m == 6 || m == 11)
        return (d <= 30);
    
    return true;
}

int main()
{
    int d, m, y;
    cout << "Enter the date ";
    cin >> d;
    cout << "Enter the month ";
    cin >> m;
    cout << "Enter the year ";
    cin >> y;

    isValidDate(d,m,y) ? cout << "Valid date " : cout << "Invalid date ";

    return 0;
}