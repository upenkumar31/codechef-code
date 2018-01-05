#include<bits/stdc++.h>
using namespace std;
int n,mx;
int dp(int *ar,int *h)
{
	int tab[2*mx+1];;
	tab[0]=0;
	for(int i=1;i<=2*mx;i++)
	tab[i]=1000000000;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j+ar[i]<=2*mx;j++)
		{
			tab[j+ar[i]]=min(tab[j+ar[i]],1+tab[j]);
		}
	}
	int res = 0;
for(int i = 0; i < n; i++)
    res = res + tab[2*h[i]];
    return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int h[n+1],ar[n+1];
		int sum=0;
		for(int i=0;i<n;i++)
		cin>>h[i];
		for(int i=0;i<n;i++)
		cin>>ar[i];
		mx=*max_element(h,h+n);
		sum=dp(ar,h);
		cout<<sum<<endl;
		
	}
}
