#include <bits/stdc++.h>
using namespace std;
void BFS(vector<int> Arr[],int i,int visited[]){
    queue<int> EdgesVisited;
    EdgesVisited.push(i);
    visited[i]=1;
    while(!EdgesVisited.empty()){
        int X=EdgesVisited.front();
        EdgesVisited.pop();
        cout<<X<<" ";
        for(auto j:Arr[X]){
            if(visited[j]==0){
                visited[j]=1;
                EdgesVisited.push(j);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    //1 based indexing
    vector<int> Arr[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        Arr[u].push_back(v);
        Arr[v].push_back(u);
        //Undirected graph
    }
    int visited[n+1]={0};
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            BFS(Arr,i,visited);
            cout<<"\n";
        }
    }
}