#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	int g;
	cin>>g;
	while(g--){
	long long b,a,n,x;
	cin>>a>>n>>b;
	x=n/2;
	if(n%2!=0)
	x++;
	if(b==a)
	cout<<n-x<<endl;
	else
	cout<<x<<endl;
}
}
}
