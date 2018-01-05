#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,sum=0;
		cin>>n;
		ll ar[n],mi[n+1],mx[n+1];
		for(int i=0;i<n;i++)
		cin>>ar[i];
		mi[0]=mx[0]=ar[0];
		for(int i=1;i<n;i++)
		{
			if(ar[i]>0)
			{
				mi[i]=min(mi[i-1]-ar[i],min(mi[i-1]+ar[i],mi[i-1]*ar[i]));
				mx[i]=max(mx[i-1]-ar[i],max(mx[i-1]+ar[i],mx[i-1]*ar[i]));
			}
			else
			{
				mi[i]=min(mi[i-1]-ar[i],min(mi[i-1]+ar[i],mx[i-1]*ar[i]));
				mx[i]=max(mx[i-1]-ar[i],max(mx[i-1]+ar[i],mi[i-1]*ar[i]));	
			}
		}
		cout<<mi[n-1]<<endl;
	}
}
