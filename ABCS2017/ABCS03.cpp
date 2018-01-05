#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,x;
	cin>>t;
	while(t--)
	{
		map<ll,ll> m;
		set<ll> s;
		set<ll>::iterator it;
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			s.insert(x);
			m[x]++;
		}
		ll sum=0;
		for(it=s.begin();it!=s.end();it++)
		{
			if(m[*it]!=1)
			sum+=m[*it]*(m[*it]-1);
		}
		cout<<sum<<endl;
	}
}
