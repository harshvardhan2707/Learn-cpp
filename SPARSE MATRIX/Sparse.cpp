#include <bits/stdc++.h>
#define vi vector<int>
#define qi queue<int>
#define REP(x,n) for(ll i=x;i<n;i++)
#define W(t) while(t-->0)
#define PB push_back
#define pqi priority_queue<int>
using namespace std;
typedef long long ll;
class Element{
    public:
    int i=0,j=0,k=0;
};
class Matrix{
    public:
    int n=0,m=0,num=0;
    Element *ele;
    ~Matrix(){
        delete[] ele;
    }
    // Matrix operator+(Matrix &s);
void create(){
    printf("Enter Dimensions\n");
    cin>>n>>m;
    printf("\nEnter number of non zero\n");
    cin>>num;
    ele=new Element[num];
    printf("\n Enter all elements as row column element\n");
    for(int i=0;i<num;i++){
        cin>>ele[i].i>>ele[i].j>>ele[i].k;
    }
}
void Display(){
    int k=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==ele[k].i && j==ele[k].j){
                cout<<ele[k++].k<<" ";
            }
            else cout<<"0 ";
        }
        cout<<"\n";
    }
}};
void summation(Matrix &s,Matrix &s1,Matrix *ans){
    if(s1.n!=s.n || s1.m!=s.m){return;}
    // Matrix *ans=new Matrix();
    ans->n=s1.n;ans->m=s1.m;ans->num=s1.num+s.num;
    ans->ele=new Element[ans->num];
    int i,j,k;
    i=j=k=0;
    while(i<s1.num && j<s.num){
        if(s1.ele[i].i<s.ele[j].i){
            ans->ele[k++]=s1.ele[i++];
        }
        else if(s1.ele[i].i>s.ele[j].i){
            ans->ele[k++]=s.ele[j++];
        }
        else{
            if(s1.ele[i].j<s.ele[j].j){
            ans->ele[k++]=s1.ele[i++];
        }
        else if(s1.ele[i].j>s.ele[j].j){
            ans->ele[k++]=s.ele[j++];
        }
        else{
            ans->ele[k]=s1.ele[i++];
            ans->ele[k++].k+=s.ele[j++].k;
        }
        }
    }
    for (;i<s1.num;i++){
        ans->ele[k++]=s1.ele[i];
    }
    for (;j<s.num;j++){
        ans->ele[k++]=s.ele[i];
    }
    ans->num=k;
    // return *ans;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    Matrix s,s1,ans;
    s.create();
    s1.create();
    summation(s,s1,&ans);
    s.Display();
    cout<<"\n";
    s1.Display();
    cout<<"\n";
    // ans.Display();
    if(&ans!=NULL)ans.Display();
    // s.Display();
    // s1.Display();

	return 0;
}