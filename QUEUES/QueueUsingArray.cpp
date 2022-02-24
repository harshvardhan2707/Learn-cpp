#include <iostream>
using namespace std;
int A[10],front=-1,rear=-1;
bool isEmpty(){
    if(front==-1 && rear==-1) return true;
    return false;
}
void Enqueue(int x){
    if((rear+1)%(sizeof(A)/sizeof(int))==front){ cout<<"Queue is full\n";
    return;}
    if(isEmpty()){
        front=rear=0;
        A[rear]=x;
        return;
    }
    rear++;
    rear%=(sizeof(A)/sizeof(int));//concept of circular array used
    A[rear]=x;

}
int Dequeue(){
    if(isEmpty()){
        cout<<"Queue is already empty\n";return -1;
    }
    if(front==rear){
        front=rear=-1;return A[front+1];
    }
    front++;
    front%=(sizeof(A)/sizeof(int));//concept of circular array used
    return A[front-1];
}
int Front(){
    if(front!=-1) return A[front];
    cout<<"No element in queue\n";
    return -1;
}
int main(){
    Enqueue(7);
    Enqueue(2);
    Enqueue(5);
    Enqueue(10);
    Enqueue(22);
    Enqueue(51);
    Enqueue(75);
    Enqueue(21);
    Enqueue(52);
    Enqueue(7);
    Enqueue(2);
    Enqueue(5);
    cout<<Dequeue();
    Enqueue(11);Enqueue(18);
    cout<<Dequeue()<<Dequeue()<<Dequeue()<<Dequeue()<<Dequeue();
}