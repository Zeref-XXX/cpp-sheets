#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    // constructor
    Stack(int s)
    {
        int size = s;
        arr = new int[s];
        top = -1;
    }
    // push
    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack OverFlow \n";
            return;
        }
        else
        {
            top++;
            arr[top] = data;
            cout << "PUSHED :" << data << " in stack \n";
        }
    }
    // pop
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow \n";
            return;
        }
        else
        {
            int temp = arr[top];
            top--;
            cout << "Popped :" << temp << " from stack \n";
        }
    }
    // peeek
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty \n";
            return -1;
        }
        return arr[top];
    }
    // IsEmpty
    bool isEmpty()
    {
        // if(top==-1) return true;
        // return false;
        return top == -1;
    }
    // Is Size
    int isSize()
    {
        return top + 1;
    }

};

int main()
{
    Stack S(4);
    cout<<"top has : "<<S.peek()<<endl;
    S.push(5);
    cout<<"top has : "<<S.peek()<<endl;
    S.push(69);
    S.pop();S.pop();S.pop();
    S.push(40);
    cout<<"top has : "<<S.peek()<<endl;
    S.isSize();
    S.push(45);S.push(34);S.push(12);
    S.isEmpty();
    return 0;
}