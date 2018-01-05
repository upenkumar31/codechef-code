#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		int d=(k/2)+1;
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=k;j++)
			{
				if(d==k)
					d=0;
				cout<<((k-j+d)%(k))+1<<" ";
			}
			d++;;
			cout<<"\n";
		}
	}
}
