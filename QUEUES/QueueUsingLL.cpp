#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* front=NULL;
Node* rear=NULL;
void Enqueue(int x){
    Node* temp=new Node();
    temp->data=x;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
         front=rear=temp;
         return;
    }
    rear->next=temp;
    rear=temp;

}
bool isEmpty(){
    if(front==NULL && rear==NULL) return true;
    return false;
}
void Dequeue(){
    Node* temp=front;
    if(temp==NULL){
        cout<<"Queue is empty";
        return;
    }
    if(front==rear){
        front=rear=NULL;
        return;
    }
    front=front->next;
    delete(temp);

}
int Front(){
    if(front==NULL){
        cout<<"No element in queue";
        return -1;
    }
    return front->data;
}
int main(){
    Enqueue(10);
    Enqueue(12);
    Enqueue(14);
    cout<<Front();
    Dequeue();
    cout<<Front();
    // Dequeue();
    // Front();

}