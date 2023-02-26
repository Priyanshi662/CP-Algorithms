// https://codeforces.com/contest/26/problem/A
// Question based on Seive of erastosthenes
#include<bits/stdc++.h>
using namespace std;
bool checkFactors(unordered_map<int,bool> prime,int n)
{
    vector<int> factors;
    int count=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n<=0)
            break;
        if(n%i==0 && prime[i])
        {
            factors.push_back(i);
        }
        n=n/i;
    }
    if(factors.size()>2||factors[0]==factors[1]||factors.size()==0)
    {
        return false;
    }
    return true;
}
vector<int> AlmostPrime(int n)
{
    vector<int> res;
    unordered_map<int,bool> prime;
    prime[0]=prime[1]=false;
    // marking prime numbers till n
    for(int i=2;i*i<=n;i++)
    {   
        if(prime[i]==true )
        {
            for(int j=i*i;j<=n;j++)
            {
                // marking every multiple of prime number as false
                prime[j]=false;
            }
        }
    }
    for(int num=1;num<=n;num++)
    {
        // Check every number for 2 factors that are distinct and prime
        if(checkFactors(prime,num))
            res.push_back(num);
    }
    return res;
}
// Driver Code:
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    vector<int> res=AlmostPrime(n);
    cout<<"The almost prime numbers are: ";
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}