#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
Node* Insert(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
    return head;
}
void Print(Node* head){//Please note this is just a pointer to the head node and we can change its position without affecting the actaul head node memory location
    if(head==NULL){cout<<"\n"; return;}
    cout<<head->data<<" ";
    Print(head->next);
}
void ReversePrint(Node* head){//Please note this is just a pointer to the head node and we can change its position without affecting the actaul head node memory location
    if(head==NULL){cout<<"\n"; return;}
    ReversePrint(head->next);
    cout<<head->data<<" ";
}
int main(){
    
    head=NULL;
    cout<<"How many numbers: ";
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the number \n";
        cin>>x;
        head=Insert(x);
        Print(head);
        ReversePrint(head);
    }
}