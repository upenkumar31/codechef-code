#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool base(ll n,ll b)
{
		if(b==2)
			return true;
		while(n>=b)
		{
			n=n/b;
		}
		if((n%b)==1)
			return true;
		else
			return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n;
		ll ans=0;
		if(n==1)
		{
			cout<<"INFINITY"<<endl;
			continue;
		}
			if(n==0)
		{
			cout<<ans<<endl;
			continue;
		}
		k=sqrt(n);
		ll lm=k/4;
		ll ml=sqrt(k);
		ll kl=ml/8;
		ll hj=sqrt(ml);
		ll jk=hj/16;
		ll ty=sqrt(hj);
		ll tu=ty/32;
		ll gf=sqrt(ty);
		ll gh=gf/64;
		for(ll i=2;i<=(k-k/4)-ml/8-hj/16-tu-gh;i++)
		{
			if(base(n,i))
			ans++;
		}
		if(n%2==1)
		ans++;
		ans=ans+n/2+lm+kl+jk+tu+gh;
		cout<<ans<<endl;
	}
	return 0;
}
