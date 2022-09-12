#include <bits/stdc++.h>
using namespace std;
bool CycleBFS(vector<int> Arr[],int i,int visited[]){
    queue<pair<int,int>> NodeParent;
    NodeParent.push({i,-1});
    visited[i]=1;
    while(!NodeParent.empty()){
        int node=NodeParent.front().first,parent=NodeParent.front().second;
        NodeParent.pop();
        cout<<node<<" ";
        for(auto j:Arr[node]){
            if(visited[j]==0){
                NodeParent.push({j,node});
                visited[j]=1;
            }
            else{
                if(j!=parent)return true;
            }
        }
    }
    return false;
}
int main(){
    int n,m;cin>>n>>m;
    vector<int> Arr[n+1];
    //1-based indexing
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        Arr[u].push_back(v);
        Arr[v].push_back(u);
        //Undirected graph
    }
    int visited[n+1]={0};
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            bool T=CycleBFS(Arr,i,visited);
            if(T)cout<<"Cycle Present";
    }
}
}