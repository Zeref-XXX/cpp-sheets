#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void setSalary(double s){
        salary=s;
    }
};

int main()
{
    Teacher t1;
    t1.name = "sraddha beta";
    t1.setSalary(1000);
    t1.dept = "cse";
}