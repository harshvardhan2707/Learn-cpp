#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int arr[5];//Stack memory - static allocation
    int *p;
    p=new int[5];//Heap memory- dynamic allocation
    int*q;
    q=new int[10];
    for(int i=0;i<5;i++){
        q[i]=p[i];
    }
    delete []p;//delete heap se array or else it cause memory leak
    p=q;q=NULL;//Resizing heap array example
	return 0;
}