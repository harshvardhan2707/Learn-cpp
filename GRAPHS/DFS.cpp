#include <bits/stdc++.h>
using namespace std;
int DFS(vector<int> arr[],int i,int visited[]){
    stack<int> X;
    visited[i]=1;
    cout<<i<<" ";
    for(auto j:arr[i]){
        if(visited[j]==0){
            DFS(arr,j,visited);
        }
    }
}
int main(){
    int n,m;cin>>n>>m;
    vector<int> arr[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    int visited[n+1]={0};
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
        DFS(arr,i,visited);
        cout<<"\n";}
    }
}