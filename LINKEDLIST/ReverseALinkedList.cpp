#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* Insert(int data,Node* head){
    Node* temp=new Node();
    temp->data=data;
    temp->next=head;
    head=temp;
    return temp;
    

}
void Print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
Node* Reverse(Node* head){
    Node *current=head,*prev=NULL,*next;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        return head;
}

int main(){
    Node* head;
    head=NULL;
    head=Insert(2,head);
    head=Insert(6,head);
    head=Insert(78,head);
    head=Insert(1,head);
    Print(head);
    head=Reverse(head);
    Print(head);
}
