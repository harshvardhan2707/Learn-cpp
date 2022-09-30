#include <bits/stdc++.h>
#include <iostream>
#include <random>
#include <ranges>
#include <algorithm>
using namespace std;
void MergeSort(std::vector<int> &v,int s,int e){
    if(s>=e)return;
    int mid=(s+e)/2;
    MergeSort(v,s,mid);
    MergeSort(v,mid+1,e);
    std::vector<int> F(e-s+1);
    int i=s,j=mid+1,k=0;
    while(i<=mid && j<=e){
        if(v[i]<=v[j])F[k++]=v[i++];
        else F[k++]=v[j++];
    }
    while(i<=mid)F[k++]=v[i++];
    while(j<=e)F[k++]=v[j++];
    for(auto i:F){
        v[s++]=i;
    }
}
int main(){
    std::random_device rd;
    std::uniform_int_distribution d(1,99);
    std::vector<int> v;
    for(int i=0;i<100;i++){
        v.push_back(d(rd)); 
    }
    MergeSort(v,0,v.size()-1);
    for(auto i:v)cout<<i<<" ";
    return 0;
}