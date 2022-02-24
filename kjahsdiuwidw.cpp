#include <bits/stdc++.h>
using namespace std;
int reverso(int t){
    int x=0,f=0;
    int neg=1;
    if(t<0){
        neg=-1;
        t=abs(t);
    }
    int m=t;
    while(m>0){
        f++;
        m/=10;
    }
    f--;
    while(t>0){
        x=x+(t%10)*pow(10,f--);
        t/=10;
    }
    return x*neg;
}
int main(){
    int t;
    cin>>t;
    cout<<reverso(t);
}