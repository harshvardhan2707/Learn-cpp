#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
#define REP(x,n) for(ll i=x;i<n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
using namespace std;
typedef long long ll;
void Perm(char s[],int k){
    static bool A[10]={0};static char Perms[10];
    if(s[k]=='\0'){
        Perms[k]='\0';
        cout<<Perms<<"\n";
    }
    else{
        for(int i=0;s[i]!='\0';i++){
            if(!A[i]){
                Perms[k]=s[i];
                A[i]=true;
                Perm(s,k+1);
                A[i]=false;
            }
        }
    }
}
void Swap(char &a,char &b){
    char x=a;
    a=b;b=x;
}
void PermAlternate(char s[],int l,int h){
    if(l==h)cout<<s<<"\n";
    else{
        for(int i=l;i<=h;i++){
            Swap(s[l],s[i]);
            PermAlternate(s,l+1,h);
            Swap(s[l],s[i]);
        }
    }
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    char s[]="ABC";
    PermAlternate(s,0,2);
	return 0;
}