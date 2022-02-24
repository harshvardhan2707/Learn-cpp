#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
Node* Insert(int data){
    Node* temp=new Node();
    temp->data=data;
    temp->next=head;
    head=temp;
    return temp;
    

}
// void reverseRec(Node* curr){
//     if(curr->next==NULL){
//         head=curr;
//         return;
//     }
//     reverseRec(curr->next);
//     Node* q=curr->next;
//     q->next=curr;
//     curr->next=NULL;
// }
void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
void Reverse(){
    Node *current=head,*prev=NULL,*next;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
}
void ReverseRec(Node* current,Node* prev){//My solution
    if(current!=NULL){
        Node* next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        return ReverseRec(current,prev);
    }
    else{
        head=prev;
    }
}
void ReverseRecsoln(Node* p){
    if(p->next==NULL){
        head=p;
        return;
    }
    ReverseRecsoln(p->next);
    Node* q=p->next;
    q->next=p;
    p->next=NULL;
}


int main(){
    head=NULL;
    head=Insert(2);
    head=Insert(6);
    head=Insert(78);
    head=Insert(1);
    Print();
    Node* p=head;
    ReverseRecsoln(p);
    Print();
}
