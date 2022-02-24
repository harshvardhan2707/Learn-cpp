#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
void Reverse(char C[],int n){
    stack<char> S;
    //loop for push
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }
    //loop for pop
    for(int i=0;i<n;i++){
        C[i]=S.top();
        S.pop();
    }
}
int main(){
    char C[51];
    printf("Enter a string:");
    gets(C);
    Reverse(C,strlen(C));
    cout<<C;
}
//Note there is a better solution than using stack to reverse a string however to reverse a linked list using a stack is the best option