#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gc getchar
ll v1[100002];
ll v2[100002];
ll v3[100002];
ll ar[100001];
void scanint(ll &x)
{
    register ll c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
void precompute(ll n)
{
	ll cn=1;
	v1[0]=1;
	for(ll i=1;i<n;i++)
	{
		if(ar[i-1]==ar[i])
		{
			cn++;
			v1[i]=cn;
		}
		else
		{
			cn=1;
			v1[i]=cn;
		}
	}
	cn=1;
	v2[n-1]=1;
	for(ll i=n-2;i>=0;i--)
	{
		if(ar[i+1]==ar[i])
		{
			cn++;
			v2[i]=cn;
		}
		else
		{
			cn=1;
			v2[i]=cn;
		}
	}
	cn=v1[n-1];
	v3[n-1]=cn;
	for(ll i=n-2;i>=0;i--)
	{
		if(ar[i+1]==ar[i])
		{
			v3[i]=cn;
		}
		else
		{
			cn=v1[i];
			v3[i]=cn;
		}
	}
}
int main()
{
	ll n,q;
	scanint(n);
	scanint(q);
	for(ll i=0;i<n;i++)
	scanint(ar[i]);
	precompute(n);
	ll l,r,x,max,in,c,u,start,end,mid,fl;
	for(ll i=0;i<q;i++)
	{
			scanint(l);
		scanint(r);
		scanint(x);
		l--;
		r--;
		c=1;
		max=1;
		in=ar[l];
		if(r-l+1>2){
			u=(r-l+1)/2;
			fl=floor(u);
			start=u+1;
			end=r-(l+u)+1;
			mid=v1[l+u]+v2[l+u]-1;
			//cout<<mid<<endl;
			if(ar[l+u]==ar[l]&&v1[l+u]>start)
			mid=mid-v1[l]+1;
			//cout<<mid<<endl;
			if(ar[l+u]==ar[r]&&v2[l+u]>end)
			mid=mid-v2[r]+1;
			//cout<<mid<<endl;
			max=mid;
			in=ar[l+u];
		}
		else
		if(r-l+1==2)
		{
			if(ar[l]==ar[r])
			 max=2;
		}
		if(max>=x)
		printf("%lld\n",in);
		else
		printf("-1\n");
	}
}
