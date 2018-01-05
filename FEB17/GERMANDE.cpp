#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll o1,o2;
		cin>>o1>>o2;
		ll n=o1*o2;
		vector<ll> v(n);
		vector<ll> sum(n);
		for(ll i=0;i<n;i++)
		scanf("%ld",&v[i]);
		ll cn=0,s=0,d=0,c,f=0;
		for(ll i=0;i<n;i++)
		{
			s=s+v[i];
			sum[i]=s;
		}
		for(ll i=0;i<o2;i++)
		{
			cn=0;
			if(i==0)
			s=0;
			else
			s=sum[i-1];
			d=o2-1+i;
			while(d<n)
			{
				//cout<<d+1<<"->"<<sum[d]-s<<" ";
				if(sum[d]-s>o2/2)
				{
					cn++;
				}
				s=sum[d];
				d=d+o2;
			}
			if(d%n<=o2-2)
			{
				//cout<<d%n+1<<"->"<<sum[n-1]-sum[d-o2]+sum[i-1]<<" ";
				if(sum[n-1]-sum[d-o2]+sum[i-1]>o2/2)
				cn++;
				
			}
			if(cn>o1/2)
			{
				cout<<"1"<<endl;
				f=1;
				break;
			}
			//cout<<endl;
		}
		if(f==0)
		cout<<"0"<<endl;
	}
}
