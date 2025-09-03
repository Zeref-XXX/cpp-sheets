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

int main()
{
    int arr[] = {5, 3, 1, 2, 4, 6, 8, 9};
    Node *root=NULL;
    for(int i=0;i<8;i++){
        root=Insert(root,arr[i]);
    }
    level(root);
    cout<<endl;
}