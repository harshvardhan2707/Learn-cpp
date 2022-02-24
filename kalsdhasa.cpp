#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long ll;
string multiply(string a, string b)
{
    int n = a.size();
    int m = b.size();
    if (n == 0 || m == 0)
    return "0";
    vector<int> result(n + m, 0);
    int c2 = 0;
    int c1 = 0;
    for (int i=n-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = a[i] - '0';
        c1 = 0;            
        for (int j=m-1; j>=0; j--)
        {
            int n2 = b[j] - '0';
            int sum = n1*n2 + result[c2 + c1] + carry;
            carry = sum/10;
            result[c2 + c1] = sum % 10;
 
            c1++;
        }
        if (carry > 0)
            result[c2 + c1] += carry;
        c2++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)
    return "0";
    string s = "";
     
    while (i >= 0)
        s += std::to_string(result[i--]);
 
    return s;
}
int main()
{
    string a,b;
    int n;cin>>a>>b>>n;
    cout<<a<<"\n"<<b<<"\n";
    n-=2;
    string x;
    for(ll i=0;i<n;i++){
        x=multiply(a,b);
        a=b;
        b=x;
        cout<<x<<"\n";
    }
}