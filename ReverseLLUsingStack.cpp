#include <iostream>
#include <stack>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void reverseLL(){
    if(head==NULL) return;
    stack<Node*> S;
    Node* temp=head;
    while(temp!=NULL){
        S.push(temp);
        temp=temp->next;
    }
    temp=S.top();
    head=temp;
    S.pop();
    while(!S.empty()){
        temp->next=S.top();
        S.pop();
        temp=temp->next;
    }
    temp->next=NULL;

}
void insertAthead(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void Print(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main(){
    head=NULL;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        insertAthead(x);
    }
    Print();
    reverseLL();
    Print();
}
