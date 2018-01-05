#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll m,n,q;
	cin>>n>>m;
	for(ll i=0;i<m;i++)
	{
		cin>>q;
		if(q<=n+1||q>3*n)
		printf("0\n");
		else if(q<=2*n+1)
		{
			printf("%lld\n",q-(n+2)+1);
		}
		else
		{
			printf("%lld\n",3*n-q+1);
		}
	}
}
