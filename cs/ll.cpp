#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
Node *&pushathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
Node *&pushattail(Node *&tail,int da){
    Node *temp = new Node(da);
    tail->next=temp;
    tail=temp;
}
void display(Node *head){
    while (head){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main()
{
    Node *Node1 = new Node(5);
    Node *head = Node1;
    Node *tail = Node1;
    pushathead(head, 88);
    pushathead(head, 44);
    pushathead(head, 10);
    pushattail(tail,300);
    pushattail(tail,456);
    display(head);
    return 0;
}