#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
#define REP(x,n) for(ll i=x;i<n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string x,y;cin>>x>>y;
    int arr[26]={0};
    if(y.length()-x.length()!=0)cout<<"Not Anagrams";
    else{
    for(int i=0;i<x.length();i++){
        arr[x[i]-'a']++;
    }
    bool flag=true;
    for(int i=0;i<y.length();i++){
        arr[y[i]-'a']--;
        if(arr[y[i]-'a']==-1){
           flag=false;break;
        }
    }
    if(flag){
    for(int i=0;i<26;i++){
        if(arr[i]!=0)flag=false;
    }}
    if(flag)cout<<"Anagrams";
    else cout<<"Not Anagrams";
    }
	return 0;
}