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
class Element{
    public:
    int coeff;int power;
};
class Polynomial{
    public:
    int n;Element *total;
    void create(){
        printf("Enter total number of non zero elements\n");
        cin>>n;
        printf("Enter elements in descending order of powers\n");
        total=new Element[n];
        for(int i=0;i<n;i++){
            printf("coeff ");
            cin>>total[i].coeff;
            printf("\npower ");
            cin>>total[i].power;
            printf("\n");
        }
    }
    void Display(){
        for(int i=0;i<n;i++){
            cout<<total[i].coeff<<".x^"<<total[i].power<<" ";
        }
        cout<<"\n";
    }
};
Polynomial addition(Polynomial &a,Polynomial &b){
    Polynomial c;
    c.n=a.n+b.n;
    c.total=new Element[c.n];
    int i,j,k;
    i=j=k=0;
    while(i<a.n && j<b.n){
        if(a.total[i].power>b.total[j].power)c.total[k++]=a.total[i++];
        else if(a.total[i].power<b.total[j].power)c.total[k++]=b.total[j++];
        else{
            c.total[k]=a.total[i++];
            c.total[k++].coeff+=b.total[j++].coeff;
        }
    }
    while(i<a.n){
        c.total[k++]=a.total[i++];
    }
    while(j<b.n){
        c.total[k++]=b.total[j++];
    }
    c.n=k;
    return c;

}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    Polynomial x,y;
    x.create();
    x.Display();
    y.create();
    y.Display();
    Polynomial ans=addition(x,y);
    ans.Display();
	return 0;
}