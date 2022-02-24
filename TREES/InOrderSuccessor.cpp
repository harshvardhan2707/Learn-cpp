#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node* parent;
};
Node* getNewNode(int data){
    Node* newNode=new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    newNode->parent=NULL;
    return newNode;
}
Node* Insert(Node* root,int data){
    if(root==NULL){
        root=getNewNode(data);
        
    }
    else if(root->data>=data){
        root->left=Insert(root->left,data);
        root->left->parent=root;
    }
    else{
        root->right=Insert(root->right,data);
        root->right->parent=root;
    }
    
    return root;

}
Node* Find(Node* root,int data){
    if(root==NULL) return NULL;
    if(root->data==data) return root;
    if(data<=root->data) return Find(root->left,data);
    return Find(root->right,data);
}
Node* findMin(Node* root){
    if(root==NULL) return NULL;
        while(root->left!=NULL)root=root->left;
        return root;
}
Node* getSuccessor(Node* root,int data){
    Node* current=Find(root,data);
    if(current==NULL) return NULL;
    //Case 1- Node has right subtree
    if(current->right!=NULL){
        return findMin(current->right);
    }
    //Case 2-No right subtree
    else{
        Node* successor=NULL;
        Node* ancestor=root;
        while(ancestor!=current){
            if(current->data<ancestor->data){
                successor=ancestor;
                ancestor=ancestor->left;
            }
            else
                ancestor=ancestor->right;
        }
        return successor;
    }

}
int main(){
    Node* root;//pointer to root node
    root=NULL; //setting tree as empty
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,8);
    root=Insert(root,12);
    root=Insert(root,17);
    cout<<getSuccessor(root,20)->data;
}