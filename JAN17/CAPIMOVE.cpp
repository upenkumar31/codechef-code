#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll> ind;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll> ar(n),a(n);
		vector<ll> v[n+1],s;
		for(ll i=0;i<n;i++)
		{
			cin>>ar[i];
			a[i]=ar[i];
			v[i+1].push_back(ar[i]);
			ind[ar[i]]=i+1;
		}
		for(ll i=0;i<n-1;i++)
		{
			ll x,y;
			cin>>x>>y;
			v[x].push_back(ar[y-1]);
			v[y].push_back(ar[x-1]);
		}
		sort(a.rbegin(),a.rend());
		for(ll i=1;i<=n;i++)
		{
			vector<ll>::iterator it1;
			ll m=0;
			sort(v[i].rbegin(),v[i].rend());
			ll p=0,q=0;
			while(p<a.size()||q<v[i].size())
			{
				if(q>=v[i].size())
				{
					m=a[p];
					break;
				}
				if(a[p]==v[i][q])
				{
					p++;
					q++;
				}
				else
				{
					m=a[p];
					break;
				}
			}
			if(m==0)
			cout<<"0 ";
			else{
		//	it1=find(ar.begin(),ar.end(),m);
		//ll pos = distance(ar.begin(), it1);
			cout<<ind[m]<<" ";
			}
		}
		cout<<endl;
	}
}
