// 5. Raheed has some money. Help him to determine how many 100, 50, 20, 10, 5, 2 and 1 Notes will be needed for a for his Money taken as Input. For example if the money Rasheed has is Rs. 545/- the he need five 100Rs. notes, two 20 Rs. notes and one 5 Rs. note.
#include <iostream>
using namespace std;
int main()
{
    int num;
    int notes[100,50,20,10,5,2,1];
    int count[7];

    cout << "Enter the money : ";
    cin >> num;

    for(int i=0;i<7;i++){
        cout<<" "<<notes[i]/count[i]<<endl;
    }

    // cout << "hundred :" << hundred << "\nfifty: " << fifty << "\nttwenty: " << twenty << "\nten: " << ten << "\nfive: " << five << "\ntwo " << two << "\none: " << one;

    return 0;
}