#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
typedef long long int ll;
void scanint(ll &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	ll  n,k,x;
	ll count=0;
	scanint(n);
	scanint(k);
	for(ll i=0;i<n;i++)
	{
		scanint(x);
		if(x%k==0)
		count++;
	}
	printf("%lld",count);
}
