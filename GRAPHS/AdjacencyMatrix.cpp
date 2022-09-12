#include <iostream>
#include <string>
#define MAX_SIZE 100
using namespace std;
string vertex_list[MAX_SIZE];
int edge_list[MAX_SIZE][MAX_SIZE];//Directed weighted graph or unweighted basically all types
int main(){
    int n,m;cin>>n>>m;
    //Considering 1 based indexing
    vector<vector<int>> ADJMatrix(n+1,vector<int>(n+1,0));
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        ADJMatrix[u][v]=1
        ADJMatrix[v][u]=1//Both done if it is undirected graph
    }
}
//Adjacency matrix takes a lot of space so only created for smaller values of n