#include <iostream>
#include <typeinfo>
using namespace std;
#define SQUARE(x) (x)*(x)
#define MAX 36

int main(){
    int l=SQUARE(6);
    int x = 36 /SQUARE(6);
    cout << x;

    return 0;
}