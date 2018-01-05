#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k,x;
		cin>>n>>k;
		long long sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			sum+=x;
		}
		if(sum<=k/2)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
