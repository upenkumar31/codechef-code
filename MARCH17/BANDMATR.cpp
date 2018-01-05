#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n;
		ll ct=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>x;
				if(x==1)
				{
					ct++;	
				}
			}	
		}
		ll ans=0,k=0,cn=n,f=1;
		while(ct>=f*cn&&ct>0)
		{
			if(f>1)
			ans++;
			ct=ct-f*cn;
			if(f==1)
			f++;
			cn--;
		}
		if(ct>0)
		ans++;
		cout<<ans<<endl;	
	}
}
