// 13. Write a program to find distance between two Coordinate points. Take (x1,y1) and(x2,y2) as input.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, y1, x2, y2, distance;
    cout << "Enter x1 and y1 : ";
    cin >> x1 >> y1;

    cout << endl
         << "Enter x2 and y2 : ";
    cin >> x2 >> y2;

    distance = sqrt((x2 - x1) + (y2 - y1));

    cout << endl
         << "Result " << distance;
    return 0;
}