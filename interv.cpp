#include <iostream>
#include <cmath>
using namespace std;
long long int prime_Sum(int n){
   	    if(n<2) return 0;
   	    if(n==2) return 2;
   	    int x=2;
   	    for(int i=3;i<=n;i+=2){
   	        bool flag=true;
            //    cout<<sqrt(i)<<" ";
   	        for(int j=2;j<=sqrt(i);j++){
   	            if(i%j==0){
   	                flag=false;
   	                break;
   	            }
   	        }
   	        if(flag) x+=i;
   	        flag=true;
   	    }
   	    return x;
   	}
int main(){
    cout<<prime_Sum(9);
}