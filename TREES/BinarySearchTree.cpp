#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* getNewNode(int data){
    BstNode* newNode=new BstNode();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
BstNode* Insert(BstNode* root,int data){
    if(root==NULL){
        root=getNewNode(data);
        
    }
    else if(root->data>=data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right=Insert(root->right,data);
    }
    return root;

}
int findMin(BstNode* root){
    if(root==NULL){
        cout<<"Empty BST";
        return -1;
    }
    if(root->left==NULL) return root->data;
    return findMin(root->left);
}
int findMax(BstNode* root){
    if(root==NULL){
        cout<<"Empty BST";
        return -1;
    }
    if(root->right==NULL) return root->data;
    return findMax(root->right);
}
BstNode* FindMin(BstNode* root){
    if(root==NULL){
        cout<<"Empty BST";
        return NULL;
    }
    if(root->left==NULL) return root;
    return FindMin(root->left);
}
int findHeight(BstNode* root){//height is the max number of edges from the lowest node to the root node
    if(root==NULL) return -1;
    return max(findHeight(root->left),findHeight(root->right))+1;
}
bool search(BstNode* root,int data){
    if(root==NULL) return false;
    if(root->data==data) return true;
    if(root->data<data) return search(root->left,data);
    return search(root->right,data);
    
}
void LevelOrder(BstNode* root){
    if(root==NULL) return;
    queue<BstNode*> Q;
    Q.push(root);
    while(!Q.empty()){
        BstNode* current=Q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL)Q.push(current->left);
        if(current->right!=NULL)Q.push(current->right);
        Q.pop();
    }
}
void PreOrder(BstNode* root){
    if(root==NULL) return;
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    
}
void InOrder(BstNode* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
    
}
void PostOrder(BstNode* root){
    if(root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
    
}
// bool isSubTreeLesser(BstNode* root,int value){
//     if(root==NULL) return true;
//     if(root->data<=value && isSubTreeLesser(root->left,value) && isSubTreeLesser(root->right,value)) return true;
//     return false;
// }
// bool isSubTreeGreater(BstNode* root,int value){
//     if(root==NULL) return true;
//     if(root->data>value && isSubTreeGreater(root->left,value) && isSubTreeGreater(root->right,value)) return true;
//     return false;
// }
bool isBST(BstNode* root,int min,int max){
    if(root==NULL) return true;
    if(root->data>min && root->data<max && isBST(root->left,min,root->data) && isBST(root->right,root->data,max) )return true;
    return false;

}
BstNode* Delete(BstNode* root,int data){
    if(root==NULL) return root;
    else if(data<root->data) root->left=Delete(root->left,data);
    else if(data>root->data) root->right=Delete(root->right,data);
    else{
        //Case 1-Leaf node case
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
            
        }
        //Case 2-Only right child
        else if(root->left==NULL){
            BstNode* temp=root;
            root=root->right;
            delete temp;
            
        }
        //Case 3-Only left child
        else if(root->right==NULL){
            BstNode* temp=root;
            root=root->left;
            delete temp;
            
        }
        //Case 4-Has both children
        else{
            BstNode* temp=FindMin(root->right);
            root->data=temp->data;
            root->right=Delete(root->right,temp->data);
        }
    }
    return root;
}
int main(){
    int user,x;cin>>user;int no;BstNode* root=NULL;
    for(int i=0;i<no;i++){
        cin>>x;
        root=Insert(root,x);
    }
    PostOrder(root);
    // int m;
    // cin>>m;
    // if(search(root,m)) cout<<"Found";
    // else cout<<"Not found";
    // cout<<findMin(root)<<" "<<findMax(root)<<"\n";
    // cout<<findHeight(root)<<"\n";
    // LevelOrder(root);cout<<"\n";
    // PreOrder(root);cout<<"\n";
    
    // PostOrder(root);
    // if(isBST(root,INT_MIN,INT_MAX)) cout<<"True";
    Delete(root,10);
    InOrder(root);cout<<"\n";
}