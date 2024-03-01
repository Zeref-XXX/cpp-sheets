#include<bits/stdc++.h>
using namespace std;
class Stack{
    int *a;
    int top;
    int size;
    public:
    Stack(int n){
        size = n;
        a = new int[size];
        top = -1;
    }
    void push(int x);
    int pop();
    bool empty();
    bool full();
    int peek();
};

void Stack::push(int x){
    if(top==size-1){
        cout<<"stack is full"<<endl;
        return ;
    }
    top++;
    a[top]=x;
}

int Stack::pop(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    int x = a[top];
    top--;
    return x;
}

bool Stack :: empty(){
    return top==-1;
}

bool Stack :: full(){
    return top==size-1;
}
 
int Stack :: peek(){
    if(top==-1){
        cout<<"No element to return"<<endl;
        return 0;
    }
    return a[top];
}
int main()
{
Stack st(5);
 int n;
 cout<<"enter your choice"<<endl;
 cout<<"1.push"<<endl;
 cout<<"2.pop"<<endl;
 cout<<"3.peek"<<endl;
 cout<<"4.cheak is empty or not"<<endl;
 cout<<"5.is full or no"<<endl;
 cout<<"6.display"<<endl;
 cin>>n;

 while(1){
    switch(n)
    {
   case 1:
          cout<<"enter element to push"<<endl;
          int x;cin>>x;
          st.push(x);
          break;

    case 2:
         cout<<"poped element is"<<st.pop()<<endl;
         break;

    case 3:
          cout<<"peek element is"<<st.peek()<<endl;
          break;

    case 4:
            if(st.empty()){
                cout<<"yes is it"<<endl;
            }else{
                cout<<"it is not empty"<<endl;
            }
            break;
    
   }
   
 return 0;
}