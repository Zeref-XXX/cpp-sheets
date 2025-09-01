#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

int main()
{
    int x, first, sec;
    queue<Node *> q;
    cout << "Enter the root node : ";
    cin >> x;
    Node *root = new Node(x);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<"ENter the left child of "<<temp->data<< ": ";
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }
        else    cout<<"Leaf Node"<<endl;
        cout<<"Enter the right child of "<<temp->data<< ": ";;
        cin>>sec;
        if(sec!=-1){
            temp->right=new Node(sec);
            q.push(temp->right);
        }
        else cout<<" leaf node "<<endl;
    }
}