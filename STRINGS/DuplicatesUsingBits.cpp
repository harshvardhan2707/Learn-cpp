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
    string x;cin>>x;//x only contains lowercase letters
    long int initialize=0;
    for(int i=0;i<x.length();i++){
        long int bitShift=1;
        bitShift=bitShift<<(x[i]-'a');
        if((bitShift&initialize)==0){
            initialize=initialize|bitShift;
        }
        else{
            // cout<<bitShift<<"\n";
            cout<<x[i]<<" is duplicate\n";
        }
    }
	return 0;
}