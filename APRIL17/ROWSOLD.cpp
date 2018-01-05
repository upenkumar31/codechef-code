#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		long long cost=0,f=0,l=0;
		long long i,j=0,n;
		n=s.size();
		i=n-1;
		l=0;
		while(s[i]=='1')
		i--;
		vector<long long> v(n);
		fill(v.begin(),v.end(),0);
		while(i>=0)
		{
			while(s[i]=='1')
			{
				v[i]=l;
				i--;
				f++;
			}
			if(s[i]=='0')
			l++;
			while(s[i]=='0')
			i--;
		}
		i=n-1;
		long long pos=n-1;
		while(i>=0)
		{
			if(s[i]=='1'&&v[i]>0&&f>0)
			{
				cost+=v[i]+pos-i;
				pos--;
				f--;
			}
			else if(s[i]=='1')
			{
				pos--;
			}
			i--;
		}
		cout<<cost<<endl;
	}
}
