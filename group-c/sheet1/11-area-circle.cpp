// 11. Write a program to find the Area of a Cirlce taking radius as input. Print the final
// Result upto 3 decimal places.
// //
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float r;
    double area;
    cout << "Enter the radious : ";
    cin >> r;
    area = 3.1428 * r * r;
    cout << setprecision(4) << "Area " << area;
    return 0;
}