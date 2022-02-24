#include <iostream>
#include <algorithm>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data){
    Node* temp=NULL;
    if(head==NULL) {
        head=new Node();
        head->data=data;
    head->next=NULL;
    return;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    temp->next=temp1;
}
void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
void Delete(int pos){
    int i;
    Node* temp1=head;
    if(pos==1){
        head=head->next;
        delete(temp1);
        return;
    }
    for(i=0;i<pos-2;i++){
        temp1=temp1->next;
    }
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete(temp2);
    }
int main(){
    head=NULL;
    Insert(2);
    Insert(5);
    Insert(4);
    Insert(9);
    Print();
    int n;
    cout<<"Enter a position\n";
    cin>>n;
    Delete(n);
    Print();
    int f=max(10,20);
    cout<<"\n\n"<<f;
}