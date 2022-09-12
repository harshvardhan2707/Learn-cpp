#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
void preOrder(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node* root){
    if(root==NULL)return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void BFS(Node* root){
    if(root==NULL)return;
    queue<Node*> X;
    X.push(root);
    while(!X.empty()){
        Node* L=X.top();
        X.pop();
        cout<<L->data;
        if(L->left)X.push(L->left);
        if(L->right)X.push(L->right);
    }
}
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5)
}