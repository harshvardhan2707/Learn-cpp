#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    //Consider 1 based indexing
    vector<int> AdjList[n+1];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
        //Undirected graph that's why both are pushed
    }
    //Storing with weights-
    vector<pair<int,int>> AdjListWeights[n+1];
        for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        AdjList[u].push_back({v,w});
        AdjList[v].push_back({u,w});
        //Undirected graph that's why both are pushed
    }
}