#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int *a;
    int top;
    int size;

public:
    Stack(int x)
    {
        a = new int[x];
        top = -1;
    }
    void push(int x);
    int pop();
    bool empty();
    bool full();
    int peek();
  //  void display();
};
void Stack::push(int x)
{
    if (top == size - 1)
    {
        cout << "Overflow" << endl;
        return;
    }
    else
        top++;
    a[top] = x;
}
int Stack::pop()
{
    if (top == -1)
    {
        cout << "Empty" << endl;
        return 0;
    }
    int x = a[top];
    top--;
    return x;
}
int Stack::peek()
{
    if (top == -1)
    {
        cout << "Nothing" << endl;
        return 0;
    }
    else
        return a[top];
}
bool Stack::empty()
{
    return top==-1;
}
bool Stack::full(){
    return top==size-1;
}


int main()
{
    Stack st(4);
    st.push(4);
    st.push(5);
    st.push(88);
   // st.display();

    while(!st.empty()){
        cout<<st.peek()<<" ";
        st.pop();
    }

    return 0;
}