#include <iostream>
using namespace std;
#define MAX_SIZE 101
int arr[MAX_SIZE];int top=-1;
int Top(){
    return arr[top];
}
void Pop(){
    if(top==-1){cout<<"No element to pop";return;}
    top--;
}
bool isEmpty(){
    if(top==-1) return true;
    return false;
}
void Push(int x){
    if(top==MAX_SIZE-1){ cout<<"Overflow";return;}
    arr[++top]=x;
}
void Print(){
    cout<<"Stack: ";
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    Push(2);Print();
    Push(5);Print();
    Push(12);Print();
    Pop();Print();
    Push(27);Print();
    
}