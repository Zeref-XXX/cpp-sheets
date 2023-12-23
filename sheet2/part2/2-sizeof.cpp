// 2. Write a program to find sizes of fundamental data types. (using operator sizeof()).
#include<iostream>
using namespace std;
int main()
{
int i;
float f;
char c;
double d;
long l;
long double ld;

cout<<"OKIEE \n";
cout<<"int    "<<sizeof(i)<<endl;
cout<<"float  "<<sizeof(f)<<endl;
cout<<"char   "<<sizeof(c)<<endl;
cout<<"double "<<sizeof(d)<<endl;
cout<<"long   "<<sizeof(ld)<<endl;
cout<<"long d "<<sizeof(ld)<<endl;
cout<<"\nType cast \n\n";

cout<<"int    "<<sizeof(i)<<endl;
cout<<"char   "<<sizeof(char(i))<<endl;
cout<<"float  "<<sizeof(float(i))<<endl;
cout<<"double "<<sizeof(double(i))<<endl;
cout<<"long   "<<sizeof(long(i))<<endl;
return 0;
}