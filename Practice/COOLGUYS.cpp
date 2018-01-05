#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
if(a>b) return gcd(b,a);
if(a==0) return b;
else return gcd(b%a,a);
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i;
		cin>>n;
		ll sum=0;
		for(i=1;i*i<=n;i++)
		sum+=n/i;
		sum=sum*2-(i-1)*(i-1);
		ll den=n*n;
		ll g=gcd(sum,den);
		cout<<sum/g<<"/"<<den/g<<endl;
	}
}
