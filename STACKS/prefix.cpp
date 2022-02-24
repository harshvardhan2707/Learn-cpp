#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
int prefix(char x[]){
    stack<int> s;
    int i=0;
    while(x[i]!='\0')i++;
    i--;
    while(i!=-1){
        if(isdigit(x[i])) s.push(x[i]-'0');
        else{
            int op1=s.top();s.pop();
            int op2=s.top();s.pop();
            if(x[i]=='^') s.push((int)pow(op1,op2));
            if(x[i]=='*') s.push(op1*op2);
            if(x[i]=='/') s.push(op1/op2);
            if(x[i]=='+') s.push(op1+op2);
            if(x[i]=='-') s.push(op1-op2);
        }
        i--;
    }
    return s.top();
}
int main(){
    char c[100]="+1*2^34";
    cout<<prefix(c);
}