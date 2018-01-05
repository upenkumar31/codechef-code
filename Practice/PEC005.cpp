#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(ll *ar,ll n)
{
	ll lis[n];
	for(ll i=0;i<n;i++)
	lis[i]=1;
	for(ll i=1;i<n;i++)
	{
		for(ll j=0;j<i;j++)
		{
			if(ar[i]>=ar[j]&&i!=j&&lis[i]<lis[j]+1)
			lis[i]=lis[j]+1;
		}
	}
	ll mx=0;
	for(ll i=0;i<n;i++)
	if(lis[i]>mx)
	mx=lis[i];
	return mx;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll ar[n+1];
		for(ll i=0;i<n;i++)
		cin>>ar[i];
		cout<<solve(ar,n)<<endl;
	}
}
