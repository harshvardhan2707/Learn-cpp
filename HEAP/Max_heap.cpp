#include <iostream>
using namespace std;
void insert(int arr[],int size,int value){
    arr[size]=value;
    size++;
    int i=size;
    while(i>1){
        if(arr[i/2-1]<arr[i-1]){
            int temp=arr[i-1];
            arr[i-1]=arr[i/2-1];
            arr[i/2-1]=temp;
            i/=2;
            // cout<<arr[i/2-1]<<" ";
        }
        else break;
    }
    // cout<<arr[0];
    // cout<<i;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
}
void Delete(int arr[],int size){
    int temp=arr[0];
    arr[0]=arr[size-1];
    arr[size-1]=temp;
    size--;
    int i=1;
    while(true){
        if(i*2<size){
        if(arr[i-1]<arr[i*2] && arr[i*2]>arr[i*2-1]){
            temp=arr[i*2];
            arr[i*2]=arr[i-1];
            arr[i-1]=temp;
            i=i*2+1;
        }
        else if(arr[i-1]<arr[i*2-1] && arr[i*2-1]>arr[i*2]){
            temp=arr[i*2-1];
            arr[i*2-1]=arr[i-1];
            arr[i-1]=temp;
            i=i*2;
        }
        else break;}
        else if(i*2-1<size && arr[i-1]<arr[i*2-1]){
            temp=arr[i*2-1];
            arr[i*2-1]=arr[i-1];
            arr[i-1]=temp;
            i=i*2;
        }
        else break;
    }
    // cout<<"HELLO";
}
void heap_sorting(int arr[],int stored_heap[],int size){
    for(int i=0;i<size;i++){
        insert(stored_heap,i,arr[i]);
    }
    for(int i=0;i<size;i++){
        cout<<stored_heap[i]<<" ";
    }
    cout<<"\nHello";
    for(int i=size;i>0;i--){
        Delete(stored_heap,i);
    }
}
void Heapify(int arr[],int size){
    for(int j=size;j>0;j--){
        int i=j,temp;
        while(true){
        if(i*2<size){
        if(arr[i-1]<arr[i*2] && arr[i*2]>arr[i*2-1]){
            temp=arr[i*2];
            arr[i*2]=arr[i-1];
            arr[i-1]=temp;
            i=i*2+1;
        }
        else if(arr[i-1]<arr[i*2-1] && arr[i*2-1]>arr[i*2]){
            temp=arr[i*2-1];
            arr[i*2-1]=arr[i-1];
            arr[i-1]=temp;
            i=i*2;
        }
        else break;}
        else if(i*2-1<size && arr[i-1]<arr[i*2-1]){
            temp=arr[i*2-1];
            arr[i*2-1]=arr[i-1];
            arr[i-1]=temp;
            i=i*2;
        }
        else break;
    }
    }
}
int main(){
    // Let us consider the height of tree to be 2 then the size of max heap/ array will be 2^(2+1)-1
    int arr[1000];int arr1[9]={21,12,18,6,4};int size=5;//1000 in this case is large enough for no value to reach that size
    insert(arr1,size,14);
    size++;
    insert(arr1,size,19);
    size++;
    insert(arr1,size,24);
    size++;
    for(int i=0;i<8;i++)cout<<arr1[i]<<" ";
    // for(int i=0;i<7;i++)arr[i]=arr1[i];
    // insert(arr,size,60);
    // size++;
    // insert(arr,size,6);
    // size++;
    // // insert(arr,size,6);
    // // size++;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // Delete(arr,size);
    // size--;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // Delete(arr,size);
    // size--;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // Delete(arr,size);
    // size--;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // Delete(arr,size);
    // size--;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // Delete(arr,size);
    // size--;
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    // // cout<<arr[-3];
    // //Implementing heap sort-
    // int n;
    // cin>>n;
    // int array[n],sorted_heap[n];
    // for(int i=0;i<n;i++)cin>>array[i];
    // heap_sorting(array,sorted_heap,n);
    // cout<<"JHiws";
    // for(int i=0;i<n;i++){
    //     cout<<sorted_heap[i]<<" ";
    // }
    // cout<<"\n";
    // Heapify(array,n);
    // for(int i=0;i<n;i++){
    //     cout<<array[i]<<" ";
    // }

}