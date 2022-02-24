#include <iostream>
#include <typeinfo>
#include <string.h>
using namespace std;
void print(char C[]){
    printf("%d",(C+3));

}
int sum(const int* x,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=*x;
        x++;
    }
    return sum;
}
void func(int A[][2][2]){ //3d array argument


}


int main(){
    // int a=1025,b=100;
    // int *p=&a;
    // int **q=&p;
    // int ***r=&q;
    // printf("%d\n",*p);
    // printf("%d\n",*q);
    // printf("%d\n",**q);
    // *r=&p;
    // p=&b;
    // printf("%d\n",p);
    // printf("%d\n",a);
    // printf("%d\n",*p);
    // printf("%d\n",**q);
    // *q=&a;
    // printf("%d\n",**q);
    // printf("%d\n",***r);
    // printf("%d\n",q);
    // printf("%d\n",**r);
    // *p=***r;
    // printf("%d\n",p);

    
//     char A[]="JohnRIP";
//     // printf("%d\n",A[7]);
//     // cout<<strlen(A);
//     // cout<<A;
//     char* M=A;
//     M++; 
//    print(A);



//    int B[2][3]={{2,3,7},{1,4,6}};
//    printf("%d\n",*B);
//    printf("%d\n",*(B+1)+2);

// int m[5]={2,4,3,6,8};
// cout<<sum(m,sizeof(m)/sizeof(int))<<"\n"<<sizeof(m);

//3d array
int C[3][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
printf("%d %d %d %d",C,*C,C[0],&C[0][0]);

}