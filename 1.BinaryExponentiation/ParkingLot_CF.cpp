// https://codeforces.com/problemset/problem/630/I
// 2n-2 spaces are available on the parking lot
// There can be three things possible
// 1. The n cars of same pack can be placed in starting of the parking lot
//    4C1(to choose n cars pack for e.g lamborghini)*(3C1)*(4C1  till n-3 places)
// 2. The n cars of same pack can be placed in the ending of the parking lot
//      (4C1  till n-3 places)*(3C1)*4C1(to choose n cars pack for e.g lamborghini)
// 3. The n cars of same pack can be placed in the middle of the parking lot - 
//    3C1 <n-3 places to keep n cars pack>* 4C1(to choose n cars pack) * (3C1) *(4C1 till n-4 places)
// Final formula becomes - 2*(4*3*pow(4,n-3)) + (n-3)*(pow(3,2)*4*pow(4,n-4))
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll bin_expo(int n,int b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=n*res;
        }
        n=n*n;
        b>>=1;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    if(n<3)
    {
        cout<<"Enter number greater than 3!";
        return 0;
    }
    ll p1=bin_expo(4,n-3);
    ll p2=bin_expo(4,n-4);
    ll res= (24*p1 + (n-3)*36*p2);
    cout<<res;
    return 0;
}