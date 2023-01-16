#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// Refer https://palak001.medium.com/spoj-locker-magic-of-the-locker-a758bccf432f 
ll mod=pow(10,9)+7;
ll bin_pow(ll n,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=(res*n)%mod;
        }
        n=(n*n)%mod;
        b>>=1;
    }
    return res;
}
ll money_mod(ll n)
{
    // there can be 3 cases:
    // 1. the number is perfectly divisible by 3 - multiply 3^quotient
    // 2. the number leaves a remainder of 2 - adding 2 with a 3 block gives 5 but 2*3 =6>5->leave the block as it is
    // 3. the number leaves a remainder of 1 - adding 1 with a 3 block gives 4 > 3*1 so add the block in the previous block
    ll d;
    ll rem=n%3;
    ll res;
    if(rem==1)
    {
        d=(n-4)/3;
        res=4*bin_pow(3,d);
    }
    else if(rem==2)
    {
        d=(n-2)/3;
        res=2*bin_pow(3,d);
    }
    else
    {
        d=n/3;
        res=bin_pow(3,d);
    }
    return res%mod;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        if(n<3)
        {
            cout<<n<<endl;
            continue;
        }
        ll res=money_mod(n);
        cout<<res<<endl;
    }
    return 0;
}