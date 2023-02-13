// A number is prime, if none of the smaller prime numbers divides it. 
// Since we iterate over the prime numbers in order, we already marked all numbers, 
// who are divisible by at least one of the prime numbers, as divisible. 
// Hence if we reach a cell and it is not marked, then it isn't divisible by any smaller prime number and therefore has to be prime.
#include<bits/stdc++.h>
using namespace std;
vector<bool> Seive(int n)
{
    vector<bool>prime(n+1,true);

    prime[0]=prime[1]=false;
    int i;
    int sz=n;
    for(i=2;i*i<=sz;i++)
    {
        // we start marking from i*i and multiples of i as (i*i)+m*i
        // because we already marked i-1's multipls
        if(prime[i])
       {for(int j=i*i;j<=sz;j+=i)
        {
            //marking multiples of current element i as false
            prime[j]=false;
        }}
    }
    return prime;
}