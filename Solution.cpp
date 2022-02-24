#include <iostream>
#include <bits/stdc++.h>
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
void InOrder(Node* root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
    
}
int Hello(Node* root,int user,int rec){
    if(user==rec)return 0;
    if(root->data>=user && root->data>=rec)return Hello(root->right,user,rec);
    else if(root->data<=user && root->data<=rec)return Hello(root->left,user,rec);
    int x=0;
    Node* temp=root;
    if(temp->data==user){
        while(temp->data!=rec){
        if(rec>temp->data){
            temp=temp->right;x++;
        }
        else{
            temp=temp->left;x++;
        }
    }
    return x;}
    else if(temp->data==rec){
        while(temp->data!=user){
        if(user>temp->data){
            temp=temp->right;x++;
        }
        else{
            temp=temp->left;x++;
        }
    }
    return x;}
    else{
        int x1=0,x2=0;
        temp=root;
        while(temp->data!=user){
            if(temp->data>user){
            temp=temp->right;x1++;}
            else{
            temp=temp->left;x1++;}
        }
        temp=root;
        while(temp->data!=rec){
            if(temp->data>rec){
            temp=temp->right;x2++;}
            else{
            temp=temp->left;x2++;}
        }
        return x1+x2;
    }
    return x;
}
int main(){
    int user,x;cin>>user;int no;cin>>no;int arr[no];Node* root=NULL;
    for(int i=0;i<no;i++){
        cin>>x;
        root=Insert(root,x);
        arr[i]=x;
    }
    sort(arr, arr + no);
    int in=0,diff=abs(arr[0]-user);
    for(int i=0;i<no;i++){
        if(diff==0){
            diff=abs(user-arr[i]);
            continue;}
        else{
            if(abs(user-arr[i])<diff && arr[i]!=user){
                diff=abs(user-arr[i]);
                in=i;
            }
        }
    }
    cout<<Hello(root,user,root->left->data);
}