#include <bits/stdc++.h>
using namespace std;
#define size 4
class Stack
{
    int *a;
    int top;

    public:
    Stack()
    {
        a = new int[size];
        top = -1; 
    }
     void push(int n);
     void pop();
     bool empty();
     bool full();
     int peak();
};
void Stack::push(int n)
{
    if (top == size - 1)
    {
        cout << "overflow ";
        return ;
    }
    else
    top++;
    a[top]=n;
}
void Stack::pop()
{
    if (top == -1)
    {
        cout << "underflow";
    }
}
int main()
{
    Stack s;
    s.push(3);
    return 0;
}