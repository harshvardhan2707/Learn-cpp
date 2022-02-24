#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
#define REP(i,n) for(ll i=1;i<=n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
#define N 101
using namespace std;
typedef long long ll;
ll arr[101][101],I[101][101];
void Multiply(ll I[][101],ll arr[][101],ll dim){
    ll mod=1000000007;
    ll ans[dim+1][dim+1];
    REP(i,dim)REP(j,dim){
        ans[i][j]=0;
        REP(k,dim)ans[i][j]=((ans[i][j]%mod)+(((I[i][k]%mod)*(arr[k][j]%mod))%(mod)))%mod;
    }
    REP(i,dim)REP(j,dim){
        I[i][j]=ans[i][j];
    }
}
void Matrix(ll arr[][101],ll I[][101],ll dim,ll pow){
    REP(i,dim)REP(j,dim){
        if(i==j)I[i][j]=1;
        else I[i][j]=0;
    }
    REP(i,dim)REP(j,dim){
        cin>>arr[i][j];
    }
    while(pow>0){
        if(pow%2==0){
            Multiply(arr,arr,dim);pow/=2;
        }
        else{
            Multiply(I,arr,dim);pow--;
        }
    }
    
    // REP(i,pow)Multiply(I,arr,dim);
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t,dim,pow;cin>>t;
    W(t){
        cin>>dim>>pow;
        Matrix(arr,I,dim,pow);
        REP(i,dim){
            REP(j,dim){
            cout<<I[i][j]<<" ";
        }
        cout<<"\n";
        }
    }
	return 0;
}