#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
struct Array{
    int A[20]={0};
    int size,length;
};
void Display(struct Array arr){
    cout<<"Elements are\n";
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<"\n";
}
void Append(Array* arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}
void Insert(Array* arr,int index,int x){
    if(index>=0&& index<=arr->length && arr->length<arr->size){
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
            arr->A[index]=x;
            arr->length++;
        
    }
}
int Delete(Array* arr,int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(int i=0;i<arr->length-1;i++)
            arr[i]=arr[i+1];
        arr->length--;
        return x;
    }
}
int LinearSearch(Array arr,int value){
    for(int i=0;i<arr.length;i++){
        if(arr.A[i]==value)return i;
    }
    return -1;
}
int imProvedLinearSearch(Array *arr,int value){
    for(int i=0;i<arr->length;i++){
        if(arr->A[i]==value){
            int temp=arr->A[i];
            arr->A[i]=arr->A[0];
            arr->A[0]=temp;
            return i;
        }
    }
    return -1;
}
int BinaryIter(Array arr,int value){
    int l=0,h=arr.length-1,m;
    while(l<=h){
        m=(l+h)/2;
        if(arr.A[m]==value)return m;
        if(arr.A[m]>value)h=m-1;
        else l=m+1;
    }
    return -1;
}
int Bin(Array arr,int l,int h,int value){
    int m;
    if(l<=h){
        m=(l+h)/2;
        if(arr.A[m]==value)return m;
        if(arr.A[m]<value)return Bin(arr,m+1,h,value);
        return Bin(arr,l,m-1,value);
    }
    return -1;
}
int Get(Array arr,int index){
    if(index>=0 && index<arr.length){
        return arr.A[index];
    }
    return -1;
}
void Set(Array *arr,int index,int x){
    if(index>=0 && index<arr->length){
        arr->A[index]=x;
    }
}
int Max(Array arr){
    int Max=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>Max)Max=arr.A[i];
    }
    return Max;
}
int Min(Array arr){
    int Min=arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<Min)Min=arr.A[i];
    }
    return Min;
}
int Sum(Array arr){
    int Sum=arr.A[0];
    for(int i=1;i<arr.length;i++){
        Sum+=arr.A[i];
    }
    return Sum;
}
float Avg(Array arr){
    return (float)Sum(arr)/arr.length;
}
void Reverse(Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}
bool isSorted(Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])return false;
    }
    return true;
}
void insertInSorted(Array *arr,int val){
    if(arr->length==arr->size)return;
    for(int i=arr->length-1;i>=0;i--){
        if(arr->A[i]<val){
            arr->A[i+1]=val;arr->length++;break;
        }
        arr->A[i+1]=arr->A[i];
    }
}
void Rearrange(Array *arr){
    int i=0,j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0)i++;
        while(arr->A[j]>0)j--;
        if(i<j){
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;}
    }
}
Array* MergeArrays(Array a,Array b){
    Array* c=new Array();
    int i,k,j;
    i=k=j=0;
    c->length=a.length+b.length;
    while(i<a.length && j<b.length){
        if(a.A[i]<b.A[j]) c->A[k++]=a.A[i++];
        else c->A[k++]=b.A[j++];
    }
    while(i<a.length)c->A[k++]=a.A[i++];
    while(i<b.length)c->A[k++]=b.A[j++];
    return c;
}
//Set Methods
Array* Union(Array a,Array b){
    Array *c=new Array();
    int i,j,k;
    i=j=k=0;
    while(i<a.length && j<b.length){
        if(a.A[i]<b.A[j])c->A[k++]=a.A[i++];
        else if(b.A[j]<a.A[i])c->A[k++]=b.A[j++];
        else{
            c->A[k++]=a.A[i++];j++;
        }
    }
    while(i<a.length)c->A[k++]=a.A[i++];
    while(j<b.length)c->A[k++]=b.A[i++];
    c->length=k;
    return c;
}
Array* Intersection(Array a,Array b){
    Array *c=new Array();
    int i,j,k;
    i=j=k=0;
    while(i<a.length && j<b.length){
        if(a.A[i]<b.A[j])i++;
        else if(b.A[j]<a.A[i])j++;
        else{
            c->A[k++]=a.A[i++];j++;
        }
    }
    c->length=k;
    return c;
}
Array* Difference(Array a,Array b){
    Array *c=new Array();
    int i,j,k;
    i=j=k=0;
    while(i<a.length && j<b.length){
        if(a.A[i]<b.A[j])c->A[k++]=a.A[i++];
        else if(b.A[j]<a.A[i])j++;
        else{
            i++;j++;
        }
    }
    while(i<a.length)c->A[k++]=a.A[i++];
    c->length=k;
    return c;
}
//Multiple missing in sorted array
void MultipleMissing(Array a){
    int diff=a.A[0]-0;
    for(int i=1;i<a.length;i++){
        if(a.A[i]-i!=diff){
            while(diff<a.A[i]-i){
                cout<<i+diff++<<" ";
            }
        }
    }
}
//Outputting missing values from unsorted array using hashing
void MissingHashing(Array a){
    int max=a.A[0];
    for(int i=1;i<a.length;i++){
        if(a.A[i]>max)max=a.A[i];
    }
    Array *a1=new Array();
    a1->length=max+1;
    for(int i=0;i<a.length;i++){
        a1->A[a.A[i]]++;
    }
    for(int i=1;i<a1->length;i++){
        if (a1->A[i]==0)cout<<i<<" ";
    }
}
//Duplicates using hashing for unsorted as well as sorted
void DuplicatesHashing(Array a){
    int max=a.A[a.length-1];
    Array *a1=new Array();
    a1->length=max+1;
    for(int i=0;i<a.length;i++)a1->A[a.A[i]]++;
    for(int i=1;i<a1->length;i++){
        if(a1->A[i]>1)cout<<i<<" occurs "<<a1->A[i]<<" times\n";
    }
}
//sum upto k using hashing in unsorted array
void SumK(Array a,int k){
    Array *a1=new Array();
    for(int i=0;i<a.length;i++){
        if(k-a.A[i]>0){
        if(a1->A[k-a.A[i]]!=0)cout<<a.A[i]<<" "<<k-a.A[i]<<" "<<k<<"\n";}
        a1->A[a.A[i]]++;
    }
}
//sum upto k in sorted array
void SumKSorted(Array a,int k){
    int i=0,j=a.length-1;
    while(i<j){
        if(a.A[i]+a.A[j]>k)j--;
        else if(a.A[i]+a.A[j]<k)i++;
        else{ 
            cout<<a.A[i]<<" "<<a.A[j]<<" "<<k<<"\n";
            i++;j--;
        }
    }
}
int main() {
    struct Array arr={{1,2,3,4,5,6,8,18,19,120},20,10};
    // Append(&arr,20);
    // Insert(&arr,-1,50);
    Display(arr);
    cout<<LinearSearch(arr,3)<<"\n";
    // cout<<imProvedLinearSearch(&arr,3)<<"\n";
    cout<<BinaryIter(arr,8)<<"\n";
    cout<<Bin(arr,0,arr.length-1,4)<<"\n";
    Display(arr);
    // cout<<Get(arr,4)<<"\n";Set(&arr,3,100);
    // Display(arr);
    cout<<Max(arr)<<"\n"<<Min(arr)<<"\n"<<Sum(arr)<<"\n"<<Avg(arr)<<"\n";
    // Reverse(&arr);
    Display(arr);
    insertInSorted(&arr,13);
    Display(arr);
    struct Array arr1={{1,-2,3,-4,5,-6,8,-18,19,-120},20,10};
    Rearrange(&arr1);
    Display(arr1);
    struct Array arr2={{12,14,24,34},20,4};
    struct Array arr3=*MergeArrays(arr,arr2);
    Display(arr3);
    struct Array arr4={{1,3,4,5,8,9,71},20,7};
    struct Array arr5={{1,2,3,4,51,62,71},20,7};
    struct Array arr6=*Difference(arr4,arr5);
    Display(arr6);
    // MultipleMissing(arr5);
    struct Array arr7={{1,7,4,3,9,8,5},20,7};
    // MissingHashing(arr7);
    struct Array arr8={{1,2,2,4,5,5,5,7,8,9,9,9,9,9},20,14};
    // DuplicatesHashing(arr8);
    // SumK(arr7,8);
    SumKSorted(arr4,74);
	return 0;
}