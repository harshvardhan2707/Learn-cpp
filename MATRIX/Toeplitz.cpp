#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
#define REP(x,n) for(ll i=x;i<n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
using namespace std;
typedef long long ll;
class Toeplitz{
    private:
    int n,*A;
    public:
    Toeplitz(int n){
        this->n=n;
        A=new int[2*n-1]{0};
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void Display();
    ~Toeplitz(){delete []A;}
};
void Toeplitz::set(int i,int j,int x){
    if(i<=j)A[j-i]=x;
    else A[n+i-j-1]=x;
}
int Toeplitz::get(int i,int j){
    if(i<=j) return A[j-i];
    else  return A[n+i-j-1];
}
void Toeplitz::Display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=j) cout<< A[j-i]<<" ";
    else  cout<< A[n+i-j-1]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    Toeplitz m(6);
    m.set(1,1,10);
    m.set(3,2,17);
    m.Display();
	return 0;
}