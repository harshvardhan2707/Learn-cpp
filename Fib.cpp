#include <bits/stdc++.h>
#define vi vector<int>
#define MAX(arr,n) *max_element(arr , arr + n)
#define qi queue<int>
#define REP(x,n) for(ll i=x;i<n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
using namespace std;
typedef long long ll;
int fibCalc(int n){
    static int Fibonacci[10000]={0};
    if(n<=1){
        Fibonacci[0]=Fibonacci[1]=1;
    }
    if(Fibonacci[n]!=0)return Fibonacci[n];
    Fibonacci[n]=fibCalc(n-1)+fibCalc(n-2);
    return Fibonacci[n];
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cout<<fibCalc(40)<<"\n";
	return 0;
}