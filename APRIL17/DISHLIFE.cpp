#include<bits/stdc++.h>
using namespace std;
typedef struct st
{
	long int n;
	vector<long int>::iterator start,end;
}st;
bool mycomp(st a,st b)
{
	return a.n>b.n;
}
bool allvis(vector<bool> &vis,long int k)
{
	vector<bool>::iterator it;
	int flag=0,c=0;
	for(it=vis.begin(),it++;it!=vis.end();it++)
	{	c++;
		if(c>k)
		{
			break;
		}
		if(*it==false)
		{
			flag=1;
			break;
		}
	}
	return flag==1?false:true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k,x,y,ans=0;
		cin>>n>>k;
		vector<bool> m(100001);
		fill(m.begin(),m.end(),false);
		vector<st> s(n);
		vector<long int> v[n];
		for(int i=0;i<n;i++)
		{
			cin>>x;
			s[i].n=x;
			for(int j=0;j<x;j++)
			{
				cin>>y;
				v[i].push_back(y);
			}
			s[i].start=v[i].begin();
			s[i].end=v[i].end();
		}
		sort(s.begin(),s.end(),mycomp);
		
		vector<long int>::iterator it;
		for(int i=0;i<n;i++)
		{
			x=s[i].n;
			if(allvis(m,k))
			{
				ans=1;
				break;
			}
			for(it=s[i].start;it!=s[i].end;it++)
			{
				m[*it]=true;
			}
		}
		if(ans==0&&allvis(m,k))
		ans=2;
		if(ans==0)
		cout<<"sad"<<endl;
		else if(ans==1)
		cout<<"some"<<endl;
		else
		cout<<"all"<<endl;
	}
}
