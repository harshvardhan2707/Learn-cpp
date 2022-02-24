#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int sum(Node* head){
    if(head)return head->data+sum(head->next);
    return 0;
}
int max(Node* head){
    int x=0;
    if(!head)return INT32_MIN;
    x=max(head->next);
    return x>head->data?x:head->data;
}
Node* moveToHead(Node* first,int data){
    Node* p=first,*q=NULL;
    if(p->data==data)return p;
    while(p!=NULL){
        if(p->data==data){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;p=p->next;
    }
    return first;
}
Node* insertInSorted(Node* head,int x){
    Node* curr=head,*prev=NULL;
    if(curr->data>=x){
        Node* prev=new Node();
        prev->data=x;prev->next=curr;
        return prev;
    }
    while(curr!=NULL){
        if(curr->data>=x){
            Node* temp=new Node();
            temp->data=x;
            prev->next=temp;
            temp->next=curr;
            return head;
        }
        prev=curr;curr=curr->next;
    }
    Node* temp=new Node();
    temp->data=x;temp->next=NULL;
    prev->next=temp;
    return head;

}
int main(){
    Node* A;
    A=NULL;
    Node* temp=new Node();
    temp->data=2;
    temp->next=NULL;
    A=temp;
    temp=new Node();
    temp->data=4;
    temp->next=NULL;
    Node* temp1=A;
    while(temp1->next!=NULL) temp1=temp1->next;
    temp1->next=temp;
    temp=new Node();
    temp->data=6;
    temp->next=NULL;
    temp1=A;
    while(temp1->next!=NULL) temp1=temp1->next;
    temp1->next=temp;
    A=insertInSorted(A,15);
    A=insertInSorted(A,1);
    A=insertInSorted(A,4);
    A=insertInSorted(A,5);
    temp1=A;int i=1;
    while(temp1!=NULL) {
        cout<<i<<" "<<temp1->data<<"\n";
        i++;temp1=temp1->next;
    }
    // cout<<sum(A)<<"\n";
    // cout<<max(A)<<"\n";
    // A=moveToHead(A,6);temp1=A;i=1;
    // while(temp1!=NULL) {
    //     cout<<i<<" "<<temp1->data<<"\n";
    //     i++;temp1=temp1->next;
    // }
}