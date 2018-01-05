#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		scanf("%d",&n);
		x=n%8;
		if(x==0)
		x=7;
		else
		x=x-1;
		if(x==0||x==3)
		x==0?cout<<(n+3)<<"LB"<<endl:cout<<(n-3)<<"LB"<<endl;
		if(x==1||x==4)
		x==1?cout<<(n+3)<<"MB"<<endl:cout<<(n-3)<<"MB"<<endl;
		if(x==2||x==5)
		x==2?cout<<(n+3)<<"UB"<<endl:cout<<(n-3)<<"UB"<<endl;
		if(x==6||x==7)
		x==6?cout<<(n+1)<<"SU"<<endl:cout<<(n-1)<<"SL"<<endl;
	}
	return 0;
}
