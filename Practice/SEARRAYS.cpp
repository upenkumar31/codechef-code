#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll solve(ll n,ll k)
{
	ll f[n+1];
	f[0]=1;
	for(ll i=1;i<=n;i++)
	f[i]=0;
	for(ll i=1;i<=n;i++)
	{
		f[i]=(f[i-1]+(i>=k?f[i-k]:0))%mod;
	}
	return f[n];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
}
