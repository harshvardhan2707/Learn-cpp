#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* InsertAtHead(Node* head,int data){
    Node* temp=new Node();
    temp->data=data;
    temp->next=head;
    return temp;
}
void Print(Node* head){
    cout<<head->data<<" ";
    while(head!=NULL){
        head=head->next;
        cout<<"->"<<head->data<<" ";
    }
}
// void Swap(int a[],int l,int h){
// int x=a[l];
//     a[l]=a[h];
//     a[h]=x;
// }
// int Partition(int a[],int l,int h){
// int pivot=a[l],i=l,j=h;
//     while(i<j){
//     do{
//         i++;
//     }while(a[i]<=pivot);
//     do{
//         j--;
//     }while(a[j]>pivot);
//         if(i<j)Swap(a,i,j);
//     }
//     Swap(a,l,j);
//     return j;
// }
int main(){
    Node* head=NULL;int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        head=InsertAtHead(head,x);
    }
    cout<<"Linked List before sorting\n";
    Print(head);
    // cout<<head->data;
}