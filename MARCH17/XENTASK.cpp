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
		ll sum1=0,sum2=0;
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			if(i%2==0)
			sum1+=x;
			else
			sum2+=x;
		}
		for(ll i=0;i<n;i++)
		{
			cin>>x;
			if(i%2==0)
			sum2+=x;
			else
			sum1+=x;
		}
		cout<<min(sum1,sum2)<<endl;
	}
}
