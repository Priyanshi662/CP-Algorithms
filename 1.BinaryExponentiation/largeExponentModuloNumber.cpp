// x^n mod m 
// As we know that modulo operator doesnt interfere in multiplication 
// an expression a*b mod m can be written as - (a mod m) (b mod m) mod m
// so we calculate x^n in O(log n) time using the binary exponentiation
typedef long long int ll;
ll bin_pow_mod(int x,int n,int m)
{
    ll res=1;
    x%=m;
    while(n>0)
    {
        if(n&1)
        {
            res=(res*x )%m;
        }
        x=(x*x)%m;
        n>>=1;
    }
    return res;
}