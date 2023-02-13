// The property of Fibonacci Numbers states that  :
// GCD(Fm,Fn) = F(GCD(m,n)
#include <bits/stdc++.h>
using namespace std;
// Q. Find the GCD of mth and nth Fibonacci Numbers
pair<int,int> nthfibo(int n)
{
    if(n==0)
        return {0,1};
        
    auto p= nthfibo(n>>1);
    int c=p.first*(2*p.second-p.first);
    int d=p.first*p.first+p.second*p.second;
    if(n&1)
        return {d,c+d};
    else
        return {c,d};
}
int main()
{
    int T;
    cout<<"Enter the number of testcases : ";
    cin>>T;
    while(T--)
    {
        int m, n;
        cout<<"Enter values of m and n : ";
        cin>>m>>n;
        int g=gcd(m,n);
        auto f=nthfibo(g);
        cout<<"The GCD of mth and nth fibonacci numbers is : "<<f.first<<endl;
    }
    return 0;
}