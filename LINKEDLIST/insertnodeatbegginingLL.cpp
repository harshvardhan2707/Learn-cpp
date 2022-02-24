#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* Insert(int x,Node* head){
    Node* temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
    return head;
}
void Print(Node* head){
    Node* temp=head;
    while((temp!=NULL)){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    Node* head;
    head=NULL;
    cout<<"How many numbers: ";
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter the number \n";
        cin>>x;
        head=Insert(x,head);
        Print(head);
    }
}