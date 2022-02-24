#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node{
    int d;Node *left,*right;
};
Node* getNewNode(int d){
    Node* x=new Node();
    x->d=d;
    x->left=NULL;x->right=NULL;
}
Node* insert(Node* head,int d){
    if(head==NULL)return getNewNode(d);
    if(head->d<d){
        head->right=insert(head->right,d);
    }
    else if(head->d>d){
        head->left=insert(head->left,d);
    }
    return head;
}
int findMaxSum(Node* root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return root->d;
    int left=findMaxSum(root->left);
    int right=findMaxSum(root->right);
    if(left>right)return root->d+left;
    return root->d+right;
}
int main(){
    int t,n,d;cin>>t;
    Node* root=NULL;
        // Node* root=NULL;
        cin>>n;int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            root=insert(root,arr[i]);
            cout<<findMaxSum(root)<<" ";
            // cout<<arr[i]<<" ";
        }
        cout<<"\n";
    return 0;
}