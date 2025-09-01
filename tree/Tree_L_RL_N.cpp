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

Node *Binary()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    Node *temp = new Node(x);
    cout<<"ENter left of "<<temp->data<<"  : ";
    temp->left = Binary();
    cout<<"Enter the right of "<<temp->data<<" : ";
    temp->right = Binary();

    return temp;
}

void preOrder(Node *root){
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node *root){
    if(root==NULL)
    return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node *root){
    if(root==NULL)
    return ;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    cout<<"Enter the root node : ";
    Node *root=Binary();
    cout<<"\nPreORder ";
    preOrder(root);
    cout<<"\n InOrder";
    inOrder(root);
    cout<<"\n PostOrder ";
    postOrder(root);
    cout<<endl;
}