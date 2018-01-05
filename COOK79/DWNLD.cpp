#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int tm[n+1],sp[n+1];
		for(int i=0;i<n;i++)
		cin>>tm[i]>>sp[i];
		int count=0;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			if(count+tm[i]<=k)
			count=count+tm[i];
			else if(count<k&&count+tm[i]>k)
			{
				count+=tm[i];
				int l=count-k;
				sum+=l*sp[i];
			}
			else
			{
				sum+=tm[i]*sp[i];
			}
			
		}
		cout<<sum<<endl;
		
	}
}
