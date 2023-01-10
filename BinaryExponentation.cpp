// 3^13 = 3^1101 = 3^8 * 3^4 * 3
// 1000 ->8 
// 100 -> 4
// 1 -> 1
// this means that we can compute power of a number in O(logn) time
// we do this by recursive function :
typedef long long int ll;
ll bin_power(int n,int b)
{
    if(b==0)
        return 1;
    ll res= bin_power(n,b/2);
    if(b%2==0)
    {
        return res*res;
    }
    else
    {
        return res*res*n;
    }
}
// using loop it can be done by :
ll bin_power_iterative(int n,int b)
{
    ll res=1;
    while(b>0)
    {
        // if the power is odd : 
        if(b&1)
            res=res*n;
        n=n*n;
        b>>=2;
    }
    return res;
}