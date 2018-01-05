#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,q,x;
	cin>>n>>q;
	vector<ll> v(n);
	for(ll i=0;i<n;i++)
	cin>>v[i];
	sort(v.begin(),v.end());
	ll big=v[n-1];
	ll small=v[0];
	for(ll i=0;i<q;i++)
	{
		cin>>x;
		if(x>=small&&x<=big)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;	
	}	
}
