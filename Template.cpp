#include <bits/stdc++.h>
using namespace std;
template <class T>
class Arithmetic{
    private:
    T a,b;
    public:
    Arithmetic(T a,T b);
    T add();
    T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}
template <class T>
T Arithmetic<T>::add(){
    return a+b;
}
template <class T>
T Arithmetic<T>::sub(){
    return a-b;
}
int main(){
    Arithmetic<float> a(10.5,5);
    cout<<a.add();
}