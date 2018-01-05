#include<bits/stdc++.h>
using namespace std;
typedef long  long ll;
long long mul(ll a, ll b) 
{
  if (b == 0) { 
      return 0;
  }
  ll ret = mul(a, b >> 1);
  ret = (ret + ret);  
  if (b & 1) {  
      ret = (ret + a);  
  }
  return ret;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,b;
		cin>>n>>b;
		if(b>=n)
		cout<<"0"<<endl;
		else
		{
			ll d=n/b;
			ll max=0;
			if(d%2!=0)
			d++;
			ll ans;
			d=d/2;
			max=mul((n-mul(d,b)),d);
			cout<<max<<endl;
		}
	}
}
