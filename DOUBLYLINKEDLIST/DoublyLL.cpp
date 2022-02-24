#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
};
Node* head;
Node* getNewNode(int x){
    Node* newNode=new Node();
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void insertAtTail(int x){
    Node* newNode=getNewNode(x);
    Node* temp=head;
    if(temp==NULL){
        head=newNode;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;newNode->prev=temp;
}
void insertAtHead(int x){
    Node* newNode=getNewNode(x);
    if(head==NULL){
        head=newNode;
        return;
    }
        head->prev=newNode;
        newNode->next=head;
        head=newNode;
}
void Print(){
    Node* temp=head;
    cout<<"Forward: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
void reversePrint(){
    Node* temp=head;
    if(temp==NULL) return;
    while(temp->next!=NULL) temp=temp->next;
    cout<<"Reverse: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<"\n";
}
int main(){
    head=NULL;
    insertAtTail(2);Print();reversePrint();
    insertAtTail(4);Print();reversePrint();
    insertAtTail(7);Print();reversePrint();

}