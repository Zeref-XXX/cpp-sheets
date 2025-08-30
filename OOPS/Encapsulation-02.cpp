// wrapping up of data and member functions in a single unit.
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
    //constructor
    Teacher(){ //non parametrized 
    }
    
    Teacher(int s,string name){ //constructor parametrized 
    }
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    //setter 
    void setSalary(double s){
        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "sraddha beta";
    t1.setSalary(1000);
    t1.dept = "cse";
}