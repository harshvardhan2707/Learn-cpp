#include <iostream>
#include <stdio.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* top=NULL;
void Pop(){
    if(top==NULL){ cout<<"NO ELEMENT TO POP";return;}
    Node* temp=top;
    top=top->next;
    delete temp;

}
void Push(int x){
    Node* temp=new Node();
    temp->data=x;temp->next=top;
    top=temp;
}
bool isEmpty(){
    if(top==NULL) return true;
    return false;
}
int Top(){
    return top->data;
}
int main(){
    isEmpty();
    Push(2);cout<<Top()<<"\n";
    Push(7);cout<<Top()<<"\n";
    Push(72);cout<<Top()<<"\n";

}