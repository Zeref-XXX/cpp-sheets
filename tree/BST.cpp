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

Node *Insert(Node *root, int value)
{
    if(root==NULL){
        Node *temp=new Node(value);
        return temp;
    }
    if(value<root->data){
        root->left=Insert(root->left,value);
    }
    else{
        root->right=Insert(root->right,value);
    }
    return root;

}

void level(Node*root){
    queue<Node *>q;
    vector<int>v;
    q.push(root);
    while(!q.empty()){
        Node *temp=q.front();
        v.push_back(temp->data);
        q.pop();
        if(temp->left !=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
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
    int arr[] = {6,3,17,5,11,18,2,1,20,14};
    Node *root=NULL; 
    for(int i=0;i<8;i++){
        root=Insert(root,arr[i]);
    }
    cout<<"LEvel : ";
    level(root);
    cout<<endl;
    cout<<"PreOrder : ";
    preOrder(root);
    cout<<endl;
    cout<<"InOrder : ";
    inOrder(root);
    cout<<endl;
    cout<<"PostOrder :";
    postOrder(root);

}