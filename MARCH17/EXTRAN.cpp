#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n;
		vector<ll> v(n);
		for(ll i=0;i<n;i++)
		cin>>v[i];
		sort(v.begin(),v.end());
		ll dif[n];
		for(ll i=0;i<n-1;i++)
		dif[i]=v[i+1]-v[i];
		for(ll i=0;i<n-1;i++)
		if(dif[i]!=1)
		{
			if(i>0&&v[i-1]+1==v[i])
			x=v[i+1];
			else
			x=v[i];
			cout<<x<<endl;
			break;
		}
	}
}
