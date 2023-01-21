#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    ll g=__gcd(a,b);
	    if(g==1)
	    {
	       // largest possible n which cannot be purchased = a.b-a-b
	       ll res=a*b-a-b;
	       cout<<res<<endl;
	       continue;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	}
	return 0;
}