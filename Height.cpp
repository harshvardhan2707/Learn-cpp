#include <iostream>
#include <iostream>
using namespace std;
int main(){
    int c,p,index=0;
    cin>>c>>p;
    int cp[c][p],fin[c][p]={{-1}};float pp[p][p];
    for(int i=0;i<c;i++){
    for(int j=0;j<p;j++){
    cin>>cp[i][j];
    }
    }
    for(int i=0;i<p;i++){
    for(int j=0;j<p;j++){
    cin>>pp[i][j];
    }
    }
    for(int i=0;i<c;i++){
    bool flag=true;
        for(int j=0;j<p;j++){
            if(cp[j]>0){
            flag=false;
                index=i;
            }
        }

    if(flag){
    for(int k=0;k<p;k++){
        int freq=0;
        for(int m=0;m<c;m++){
        freq+=cp[m][k];
        }
        fin[index][p]=freq;
    }
    }
    }
    cout<<fin[3][0];
}