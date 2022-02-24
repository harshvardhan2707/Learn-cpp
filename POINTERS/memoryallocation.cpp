#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int a; //goes on stack
    int *p;
    p=new int;
    *p=10;
    delete p;
    p=new int[20];//for array memory allocation
    delete[] p;
    return 0;
}