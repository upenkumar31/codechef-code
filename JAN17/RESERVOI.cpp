#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		char s[m+1][n+1]={'#'};
		for(int i=0;i<m;i++)
		cin>>s[i];
		int f=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((s[i][j]=='W'&&s[i][j+1]=='A'&&j<n-1)||(s[i][j]=='A'&&s[i][j+1]=='W'&&j<n-1))
				{
					f=1;
					break;
				}
				if((s[i][j]=='W'&&s[i+1][j]=='A'&&i<m-1))
				{
					f=1;
					break;
				}
				if((s[i][j]=='B'&&s[i+1][j]=='A'&&i<m-1)||(s[i][j]=='B'&&s[i+1][j]=='W'&&i<m-1))
				{
					f=1;
					break;
				}
				if((j==0&&s[i][j]=='W')||(j==n-1&&s[i][j]=='W')||(i==m-1&&s[i][j]=='W'))
				{
					f=1;
					break;
				}			
			}
			if(f==1)
			break;
		}
		if(f==1)
		cout<<"no"<<endl;
		else
		cout<<"yes"<<endl;
	}
}
