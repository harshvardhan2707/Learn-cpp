#include<iostream>
#include<cstdio>
using namespace std;
struct complex{
        int x,y;
};
complex add(complex c,complex c1){
complex c2;
    c2.x=c.x+c1.x;
    c2->y=c->y+c1->y;
    return c2;
}

int main()
{
    complex c,c1;
    cin>>c->x>>c->y>>c1->x>>c1->y;
    complex c2=add(c,c1);
    cout<<c2->x<<"+"<<c2->y<<"i";
}