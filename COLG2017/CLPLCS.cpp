#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char ch[11][2];
ll maxx=0;
void dp(ll n,ll *vis,ll k,ll l)
{
	vis[k]=1;
	ll mx=0,x;
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			if(ch[k][1]==ch[i][0])
			dp(n,vis,i,l+1);
		}
	}
	vis[k]=0;
	if(l>maxx)
	maxx=l;
}
int main()
{
	int n;
	cin>>n;
	ll vis[n+1];
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		ch[i][0]=s[0];
		ch[i][1]=s[s.size()-1];
		vis[i]=0;
	}
	for(int i=0;i<n;i++)
	dp(n,vis,i,1);
	cout<<maxx;
}
