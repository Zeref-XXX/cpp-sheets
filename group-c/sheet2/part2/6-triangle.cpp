// WAP that asks the user to input lengths of three sides of a triangle and
// a. Prints whether it is a valid triangle or not
// b. If the triangle is valid, prints whether the triangle is equilateral, scalene or isosceles.
#include<iostream>
#include<cmath>
using namespace std;
float ar(int a, int b, int c){
    float s,area;
    s= a+b+c;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

int main()
{
float a,b,c,area;
cout<<"Enter the sides of the triangle : ";
cin>>a>>b>>c;
if((a+b>c)||(a+c>b)){
    cout<<"Valid Triangle \n";
    area = ar(a,b,c);
    cout<<"Area : "<<area;
}

return 0;
}