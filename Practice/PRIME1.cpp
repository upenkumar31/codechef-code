#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,bool> ar;
int p[100001];
void prime()
{
	for(ll i=1;i<=32000;i++)
	ar[i]=false;
	ar[1]=true;
	for(ll i=2;i*i<=32000;i++)
	{
		if(!ar[i])
		{
			for(ll j=i*2;j<=32000;j+=i)
			ar[j]=true;
		}
	}
}
int main()
{	
	prime();
	int t;
	cin>>t;
	while(t--)
	{
		ll m,n,v,i,j;
		cin>>m>>n;
		if(m<2)
		m=2;
		memset(p,0,sizeof(p));
		for(i=2; i*i<=n; i++)
		if(!ar[i])
		{
			v=((m-1)/i+1)*i;
			for(j=v==i?i<<1:v; j<=n; j+=i)
				p[j-m]=1;
		}
		for(i=0; i<=n-m; i++)
		if(!p[i])
		printf("%d\n",i+m);
		printf("\n");
	}
}
