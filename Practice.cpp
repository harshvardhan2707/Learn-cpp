#include <iostream>
using namespace std;
int fun(int x,int y){
    if(x==0) return 1;
    return y*fun(x-1,y);
}
int main() {
char arr[20];
int i;
for (i = 0; i< 10; i++)
*(arr + i) = 65 + i+1;
*(arr + i) = '\0';
cout << arr;
return 0;
}