#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n;
		vector<ll> v;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
	
		int flag=0;
		vector<ll> v1;
		for(ll i=0;i<v.size()-1;i++)
		{
			for(ll j=i+1;j<v.size();j++)
			if(v[i]==v[j])
			v1.push_back(v[i]);
			else
			v1.push_back(boost::math::lcm(v[i],v[j]));
		}
		cout<<*min_element(v1.begin(),v1.end())<<endl;
		 v.clear();
		
	}
}
