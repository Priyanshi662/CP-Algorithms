#include <bits/stdc++.h>
using namespace std;

pair<int,int> Fibo(int n)
{
	if(n==0)
		return {0,1};
	auto p=Fibo(n>>1);
	int c=p.first*(2*p.second-p.first);
    int d=p.first*p.first+p.second*p.second;
    if(n&1)
        return {d,c+d};
    else
        return {c,d};
} 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		auto p=Fibo(n);
		int mod=pow(10,9)+7;
		int sum=(p.first+p.second)%mod;
		cout<<sum<<endl;
	}
	return 0;
}