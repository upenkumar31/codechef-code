#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t,m=1;
	cin>>t;
	while(m<=t){
	ll n,x;
	cin>>n;
	vector<ll> v1(n),v2(n);
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>v1[i];
		sum+=v1[i];
	}
	int f=0,c=1;
	if(sum!=(ll)((n*(n+1))/2))
	{
			f=1;
	}
	if(f==1)
	cout<<"no"<<endl;
	else
	{
		int k=0;
		for(ll i=0;i<n-1;i++)
		{
			if(v1[i+1]<v1[i])
			{
				k=1;
				break;
			}
		}
		if(k==1)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
	m++;
}
}
