#include <bits/stdc++.h>
#include<stdint.h>
using namespace std;
typedef int64_t ll;
typedef struct ran
{
	ll l,r;
}ran;
bool mycomp(ran a, ran b)
{   return a.l > b.l; }
int main() {
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        ll c=0,x,y;
		ll count=0,k;
		vector<ran> range;
		ran range1;
		for(ll i=0;i<n-1;i++)
		{
				
				x=v[i+1]-v[i]+1;
				y=v[i+1]+v[i]-1;
				if(x<=r)
				{
					range1.l=x;
					range1.r=y;
					range.push_back(range1);
					c++;
				}
		}
		sort(range.begin(),range.end(), mycomp);
		ll index = 0;
     for (ll i=0; i<c; i++)
    {
        if (index != 0 &&range[index-1].l <=range[i].r)
        {
            while (index != 0 &&range[index-1].l <=range[i].r)
            {
                range[index-1].r = max(range[index-1].r, range[i].r);
                range[index-1].l = min(range[index-1].l, range[i].l);
                index--;
            }
        }
        else 
            range[index] =range[i];
        index++;
    }
    ll sum=0;
    for (ll i = 0; i < index; i++)
        {
        	if(range[i].l<l)
        	range[i].l=l;
        	if(range[i].r>r)
        	range[i].r=r;
        	sum+=range[i].r-range[i].l+1;
		}
		cout<<sum;
    return 0;
}
