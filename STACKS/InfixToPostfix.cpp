#include <iostream>
#include <stack>
#include <string>
using namespace std;
int operatorPrec(char x1){
    if(x1=='-' || x1=='+') return 1;
    if( x1=='*' || x1=='/') return 2;
    if(x1=='^')return 3;
    if(x1=='('||x1==')')return 4;
}
bool isLtoRPrec(char x1){
    if(x1=='+'||x1=='-'||x1=='/'||x1=='*')return true;
    if(x1=='^')return false;
}

string postfix(char x[]){
    stack<int> s;
    int i=0;
    string ans="";
    while(x[i]!='\0'){
        
        if(isdigit(x[i])){
            ans+=(x[i]);
        }
        else if(x[i]=='+' || x[i]=='-' || x[i]=='/' || x[i]=='*' || x[i]=='^'){
            while(!s.empty() && s.top()!='(' && operatorPrec(s.top())>=operatorPrec(x[i])){
                if(operatorPrec(s.top())>operatorPrec(x[i]) || isLtoRPrec(s.top())){
                ans+=(s.top());
                s.pop();}
                else break;
            }
            s.push(x[i]);
        }
        else if(x[i]=='(') s.push(x[i]);
        else if(x[i]==')'){
            while(!s.empty() && s.top()!='('){
                ans+=(s.top());
                s.pop();
            }
            s.pop();
        }
        i++;
        }
        while(!s.empty()){
            ans+=(s.top());
            s.pop();
        }
        return ans;
}
int main(){
    char c[100]="((1+2)*3)-4^5^6";
    cout<<postfix(c);
}