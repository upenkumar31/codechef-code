#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.size();
		for(int i=l-1;i>=0;i--)
		{
			if(i<=2&&s[i]=='?')
			{
				s[i]='A';
			}
			else if(i<=3)
			{
				 if((s[i]=='?'||s[i]=='F')&&(s[i-1]=='?'||s[i-1]=='E')&&(s[i-2]=='?'||s[i-2]=='H')&&(s[i-3]=='?'||s[i-3]=='C'))
				{
					s[i]='F';
					s[i-1]='E';
					s[i-2]='H';
					s[i-3]='C';
				}
				else if(s[i]=='?')
				s[i]='A';
			}
			else if(i>=4)
			{
				if((s[i]=='?'||s[i]=='F')&&(s[i-1]=='?'||s[i-1]=='E')&&(s[i-2]=='?'||s[i-2]=='H')&&(s[i-3]=='?'||s[i-3]=='C'))
				{
					s[i]='F';
					s[i-1]='E';
					s[i-2]='H';
					s[i-3]='C';
				}
				else if(s[i]=='?')
				s[i]='A';
			}
		}
		cout<<s<<endl;
	}
}
