#include <bits/stdc++.h>
using namespace std;
//Only using + - * and /
int higherPrecedence(char x){
    if(x=='+' || x=='-')return 1;
    return 2;
}
string returnPostfixM1(string arr){
    stack<char> operands;
    string ans="";
    for(int i=0;i<arr.length();i++){
        if(arr[i]>='0' && arr[i]<='9')ans+=arr[i];
        else{
            while(!operands.empty() && higherPrecedence(operands.top())>=higherPrecedence(arr[i])){
                ans+=operands.top();operands.pop();
            }
            operands.push(arr[i]);
        }
    }
    while(!operands.empty()){
        ans+=operands.top();operands.pop();
    }
    return ans;
    }
int main(){
    string arr="1+2*3-4/5";
    cout<<returnPostfixM1(arr);
}