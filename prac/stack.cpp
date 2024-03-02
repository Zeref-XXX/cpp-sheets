#include <bits/stdc++.h>
using namespace std;

struct createnode
{
    int data;
    createnode *next;
};
struct Stack
{
    createnode *top;
};
Stack *createstack(){
    Stack *s = new Stack;
    s->top=NULL;
    return s;
};
void push(Stack *s,int data){
    createnode *newnode= new createnode;
    newnode->data=data;
    newnode->next=s->top;
    s->top = newnode;
}