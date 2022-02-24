#include <iostream>
#include <stack>
using namespace std;
bool checkBalanced(char arr[]){
    stack<char> S;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[') S.push(arr[i]);
        else if(!S.empty() && ((arr[i]==')' && S.top()=='(')||(arr[i]==']' && S.top()=='[')||(arr[i]=='}' && S.top()=='{'))){ S.pop();}
        else return false;
    }
    
    return S.empty();
}
int main(){
    char arr[100];
    cin>>arr;
    if(checkBalanced(arr)) cout<<"TRUE";
    else cout<<"FALSE";
}