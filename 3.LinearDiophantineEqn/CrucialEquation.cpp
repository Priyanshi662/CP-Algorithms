#include <bits/stdc++.h>
using namespace std;
//Crucial Equation problem: https://www.spoj.com/problems/CEQU/
// If  c  is divisible by  g = gcd(a, b), then the given Diophantine equation has a solution, otherwise it does not have any solution.
// we know its diophantine solution because a and b are relatively prime so their gcd exists
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        int g=__gcd(a,b);
        if(c%g==0)
        {
            cout<<"Case "<<i<<": Yes"<<endl;
        }
        else{
            cout<<"Case "<<i<<": No"<<endl;
        }
    }
    return 0;
}