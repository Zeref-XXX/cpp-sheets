// K. Max and Min
// time limit per test0.25 seconds
// memory limit per test64 megabytes
// inputstandard input
// outputstandard output
// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // long long a, b, c;
    // cin >> a >> b >> c;
    // if (a < b && a < c)
    // {

    //     cout << a;
    // }
    // if (b < c&& b<a)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << c;
    // }
    // cout << " ";
    // if (a > b && a > c)
    // {
    //     cout << a;
    // }
    // else if (b > c & b > a)
    // {
    //     cout << b;
    // }
    // else
    //     cout << c;
    long long arr[3], min_num, max_num;
    cin>>arr[0]>>arr[1]>>arr[2];
    min_num = max_num = arr[0];
    for(int i = 1 ; i<=2 ; i++)
    {
        if(min_num<=arr[i])
        min_num = min_num;
        else 
        min_num = arr[i];

        if(max_num>=arr[i])
        max_num = max_num;
        else 
        max_num = arr[i];
    }
    cout<<min_num<<" "<<max_num;

    return 0;
}