#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
#define REP(x,n) for(ll i=x;i<n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
using namespace std;
typedef long long ll;
class Symmetric{
    private:
    int n,*A;
    public:
    Symmetric(int n){
        this->n=n;
        A=new int[(n*(n+1))/2]{0};
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void Display();
    ~Symmetric(){delete []A;}
};
void Symmetric::set(int i,int j,int x){
    if(i>=j)A[((i-1)*i)/2+j-1]=x;
    else A[((j-1)*j)/2+i-1]=x;
}
int Symmetric::get(int i,int j){
    if(i>=j)return A[((i-1)*i)/2+j-1];
    return A[((j-1)*j)/2+i-1];
}
void Symmetric::Display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i>=j)cout<<A[(i*(i-1))/2+j-1]<<" ";
            else cout<<A[(j*(j-1))/2+i-1]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    Symmetric m(6);
    m.set(1,1,10);
    m.set(2,1,15);
    m.set(2,2,25);
    m.set(3,1,10);
    m.set(3,2,9);
    m.set(3,3,1);
    m.set(5,2,89);
    m.Display();
	return 0;
}