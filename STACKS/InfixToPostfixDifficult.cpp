#include <bits/stdc++.h>
using namespace std;
int precedence(char x,bool inStack){
    if(x=='+'||x=='-')return inStack?2:1;
    else if(x=='/' ||x=='*')return inStack?4:3;
    else if(x=='^')return inStack?5:6;
    else return inStack?0:7;
}
string infixToPostfix(string arr){
    stack<char> x;
    int i=0;string ans="";
    while(arr[i]!='\0'){
        if(arr[i]=='+'||arr[i]=='-'||arr[i]=='/'||arr[i]=='*'||arr[i]=='^'||arr[i]=='('){
            if(!x.empty()&&precedence(x.top(),true)>=precedence(arr[i],false)){
                ans+=x.top();
                x.pop();
            }
            else{
                x.push(arr[i++]);
            }
        }
        else if(arr[i]==')'){
            if(x.top()!='('){
                ans+=x.top();
                x.pop();
            }
            else {
                x.pop();i++;
        }
    }
    else ans+=arr[i++];}
    while(!x.empty()){
        ans+=x.top();
        x.pop();
    }
    return ans;
}
int main(){
    string infix="((a+b)*c)-d^e^f";
    cout<<infixToPostfix(infix);
}