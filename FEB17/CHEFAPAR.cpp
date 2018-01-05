#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
        int t;
        cin>>t;
        while(t--)
        {
        	ll n;
        	cin>>n;
        	ll ar[n+1];
        	for(ll i=0;i<n;i++)
        	cin>>ar[i];
        	ll sum=0,i=0,c;
        	while(ar[i]==1) i++;
        	c=i;
    		for(;i<n;i++)
    		{
    			if(ar[i]==0)
    			sum+=1000;
			}
			sum+=(n-c)*100;
			cout<<sum<<endl;
		}
    return 0;
}
