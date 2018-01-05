#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n=0,m=0,k,x;
		cin>>n>>m;
		k=n-1;
		ll sum=0;
		x=n+m;
		for(int i=0;i<k;i++)
		sum+=pow(2,i);
		sum+=pow(2,x-1);
		cout<<sum<<endl;
	}
}
