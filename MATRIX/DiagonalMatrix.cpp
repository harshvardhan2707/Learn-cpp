#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
#define REP(x,n) for(ll i=x;i<n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
using namespace std;
typedef long long ll;
class Diagonal{
    private:
    int n,*A;
    public:
    Diagonal(){
        this->n=2;
        A=new int[n]{0};
    }
    Diagonal(int n){
        this->n=n;
        A=new int[n]{0};
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void Display();
    ~Diagonal(){delete []A;}
};
void Diagonal::set(int i,int j,int x){
    if(i==j)A[i-1]=x;
}
int Diagonal::get(int i,int j){
    if(i==j)return A[i-1];
    return 0;
}
void Diagonal::Display(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)cout<<A[i]<<" ";
            else cout<<"0 ";
        }
        cout<<"\n";
    }
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    Diagonal m(10);
    m.set(10,10,20);
    m.Display();
	return 0;
}