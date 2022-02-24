#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class tree{
public:
    int val;
    tree* left,*right;
};
tree *create(tree *root)
{
    int x;
    cin>>x;
    if(x==-1)
        return NULL;
    root=new tree;
    root->val=x;
    root->left=create(root->left);
    root->right=create(root->right);
    return root;
 
}
void inorder(tree *root)
{
    if(!root)
        return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main()
{
    tree *root=NULL;
    root=create(root);
    inorder(root);
    return 0;
}