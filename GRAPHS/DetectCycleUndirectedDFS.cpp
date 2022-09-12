#include <bits/stdc++.h>
using namespace std;
bool CycleDFS(vector<int> Arr[],int i,int parent,int visited[]){ 
    visited[i]=1;
    cout<<i<<" ";
    for(auto j:Arr[i]){
        if(visited[j]==0){
        if(CycleDFS(Arr,j,i,visited))return true;}
        else{
            if(j!=parent)return true;
        }
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> AdjList[n+1];
    //1 based indexing
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
        //Undirected graph
    }
    int visited[n+1]={0};
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            if(CycleDFS(AdjList,i,-1,visited))cout<<"Cycle Present";
        }
    }
}