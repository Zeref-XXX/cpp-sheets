// 5. Raheed has some money. Help him to determine how many 100, 50, 20, 10, 5, 2 and 1 Notes will be needed for a for his Money taken as Input. For example if the money Rasheed has is Rs. 545/- the he need five 100Rs. notes, two 20 Rs. notes and one 5 Rs. note.
#include <iostream>
using namespace std;
int main()
{
    int num, hundred = 0, fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;
    cout << "Enter the money : ";
    cin >> num;

    hundred = num / 100;
    num = num % 100;

    fifty = num / 50;
    num = num % 50;

    twenty = num / 20;
    num = num % 20;

    ten = num / 10;
    num = num % 10;

    five = num / 5;
    num = num % 5;

    two = num / 2;
    num = num % 2;

    one = num / 1;
    num = num % 1;

    cout << "hundred :" << hundred << "\nfifty: " << fifty << "\ntwenty: " << twenty << "\nten: " << ten << "\nfive: " << five << "\ntwo " << two << "\none: " << one;

    return 0;
}