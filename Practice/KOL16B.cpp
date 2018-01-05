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
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		v2[i]=x>>16;
		v1[i]=x-(v2[i]<<16);
	}
	cout<<"Case "<<m<<":"<<endl;
	for(ll i=0;i<n;i++)
	cout<<v1[i]<<" ";
	cout<<endl;
	for(ll i=0;i<n;i++)
	cout<<v2[i]<<" ";
	cout<<endl;
	m++;
}
}
