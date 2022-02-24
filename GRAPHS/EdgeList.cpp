#include <iostream>
#include <string>
#define MAX_SIZE 100
using namespace std;
class Edge{//Weighted graph
    int startVertex;//first vertex index from vertex_list
    int endVertex;//second vertex index from vertex_list... we connect first vertex and second vertex and that is the edge
    int weight;
};
string vertex_list[MAX_SIZE];
Edge edge_list[MAX_SIZE];
int main(){

}
//Edge list method takes a lot of time