#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> edge[200000+1];
ll edg[200000+1][2];
ll ed[200000+1];
ll deg[100000+1];
map< pair<ll,ll>,ll> m1;
bool vis[100000+1];
void dfs(ll v)
{
	if(vis[v])
	return;
	vis[v]=true;
	vector<ll>::iterator i;
	 for (i = edge[v].begin(); i != edge[v].end(); ++i)
        if (!vis[*i])
            dfs(*i);
}
bool connected(ll n,ll start)
{
	ll i;
	dfs(start);
	for(i=1;i<=n;i++)
	{
		if(vis[i]==false)
		return false;
	}	
	return true;
}
bool degree(ll n)
{
	ll i,count=0;
	for(i=1;i<=n;i++)
	{
		if(deg[i]%2!=0||deg[i]==0)
		{
			count=1;
			break;
		}
	}
	if(count==1)
	return false;
	else
	return true;
}
int main()
{
	ll n,e,st,x,y;
	cin>>n>>e;
	for(ll i=1;i<=n;i++)
	{
		deg[i]=0;
		vis[i]=false;
	}
	int f=0;
	for(ll i=1;i<=e;i++)
	{
		scanf("%lld%lld",&x,&y);
		edge[x].push_back(y);
		edge[y].push_back(x);
		edg[i][0]=x;
		edg[i][1]=y;
		deg[x]++;
		deg[y]++;
	}
	stack<ll> s1;
	st=1;
	if(degree(n)&&connected(n,st))
	{
		ll j=0;
		while(1){
			if(edge[st].empty())
			{
				ed[j++]=st;
				st=s1.top();
				s1.pop();	
			}
			else
			{
				s1.push(st);
				x=st;
				st=edge[st].back();
				y=st;
				edge[x].pop_back();
				edge[y].erase(remove(edge[y].begin(),edge[y].end(),x), edge[y].end());
			}
			if(edge[st].empty()&&s1.empty())
			{
				ed[j]=st;
				break;
			}
		}
		cout<<"YES";
		for(ll l=j;l>0;l--)
		{
			m1[make_pair(ed[l],ed[l-1])]=1;
			m1[make_pair(ed[l-1],ed[l])]=0;
		}
		for(ll l=1;l<=e;l++)
		{
			if(m1[make_pair(edg[l][0],edg[l][1])]==1)
			printf("\n%lld %lld",edg[l][0],edg[l][1]);
			else
			printf("\n%lld %lld",edg[l][1],edg[l][0]);
		}
	}
	else
	cout<<"NO";
}
