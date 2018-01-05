#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll nCr(ll n,ll k)
{
    ll res = 1;
 
       if ( k > n - k )
        k = n - k;
 
    for (ll i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
 
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,p,k,l;
		double c,y,ans=0;
		cin>>n>>m>>p>>k;
		if(n%2==0&&m%2==0)
		{
			ans=1.0;
		}
		else if(n%2!=0&&m%2!=0)
		{
			ans=0.0;
			if(p==0)
			ans=1.0;
		}
		else
		{	if(p==0)
			ans=1.0;
			else{
			l=nCr(k,p);
			ans=l;
			for(ll i=p+1;i<=k;i++)
			{
				l=(double)(((double)(k-i+1)/i))*l;
				ans+=l;
			}
				ans=(double)(ans/powf(2,k));
			}
		}
		
		printf("%lf\n",ans);
	}
}
