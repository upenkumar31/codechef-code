#include<iostream>
using namespace std;
typedef long long ll;
ll fast_pow(ll a,ll n)
{
    ll result = 1;
    ll power = n;
    ll value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%1000000007;}
        value = value*value;
        value = value%1000000007;
        power /= 2;
        //power >>= 1;
    }
    return result;
} 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll left=n-1;
		ll sum=fast_pow(2,left)-2;
		if(n>2)
		cout<<sum<<endl;
		else
		cout<<0<<endl;
	}
	
}
