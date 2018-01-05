#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int solve(string *s,int n)
{
	int f=0;
	int tab[n][n];
	for(int i=0;i<n;i++)
	{
		f=0;
		for(int j=n-1;j>=0;j--)
		{
			if(f==0)
			{
				if(s[i][j]=='#')
				f=1,tab[i][j]=1;
				else
				tab[i][j]=0;
			}
			else
			tab[i][j]=1;
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			if(s[j][i]=='#')
			break;
			else
			{
				if(tab[j][i]==0)
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++)
		cin>>s[i];
		cout<<solve(s,n)<<endl;	
	}	
}
