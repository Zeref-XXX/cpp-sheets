#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Stack
{
    Node *top;
    int size; // size of the stack
public:
    Stack()
    {
        top = NULL;
        size = 0;
    }
    // push
    void push(int data)
    {
        Node *temp = new Node(data);
        if (temp == NULL)
        {
            cout << "Stack OverFlow \n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
        // delete temp;
    }
    // pop
    void pop()
    {
        if (size == 0)
        {
            cout << "Stack underFlow \n";
            return;
        }
        int temp = top->data;
        Node *tempNode = top;
        top = top->next;
        size--;
        cout << "popped : " << temp << endl;
        delete tempNode;
    }
    // peek
    void peek()
    {
        if (size == 0)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << top->data;
    }
    // size
    int isSize()
    {
        return size;
    }
    // empty
    bool isEmpty()
    {
        return size == 0;
    }
};
int main()
{
    Stack st;
    st.push(4);
    // st.peek();
    st.push(42);
    st.push(56);
    // cout<<"Size "<<st.isSize()<<endl;
    
    cout<<"EMPTY "<<st.isEmpty()<<endl;
    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Current stack size: " << st.isSize() << endl;
    

    st.pop();  
    st.pop(); 

    st.pop();  
    st.pop(); 

    st.pop();     
    st.pop();  // Pop the last element
    st.pop();  // Try to pop from an empty stack
    st.peek(); // Try to peek at an empty stack

    cout << "\nPushing another element..." << endl;
    st.push(99);
    cout << "Current stack size: " << st.isSize() << endl;
    st.peek();
    cout<<endl;
    return 0;
}