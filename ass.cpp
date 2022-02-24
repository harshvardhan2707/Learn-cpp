#include <iostream>
using namespace std;
int main()
{
float arr[5] = { 1, 2, 3, 4, 5};
float *ptr1 = &arr[2];
float *ptr2 = ptr1 + 2;
float *ptr3 = ptr2 + 1;
cout<<*ptr2<<endl;
cout<<(ptr2 - ptr1)<<endl;
cout<<arr[ptr3 - ptr1]<<endl;
return 0;
}
//Line1
//Line2
//Line3