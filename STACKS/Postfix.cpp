#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
int postfix(char x[]){
    stack<int> s;
    int i=0;
    while(x[i]!='\0'){
        if(isdigit(x[i])) s.push(x[i]-'0');
        else{
            int op2=s.top();s.pop();
            int op1=s.top();s.pop();
            if(x[i]=='^') s.push((int)pow(op1,op2));
            if(x[i]=='*') s.push(op1*op2);
            if(x[i]=='/') s.push(op1/op2);
            if(x[i]=='+') s.push(op1+op2);
            if(x[i]=='-') s.push(op1-op2);
        }
        i++;
    }
    int l=s.top();
    s.pop();
    if(s.empty()) return l;
    return -100;
}
int main(){
    char c[100]="823^/23*+51*-";
    cout<<postfix(c);
}