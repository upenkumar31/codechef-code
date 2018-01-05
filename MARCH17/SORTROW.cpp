#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define gc getchar_unlocked
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
	int n;
	cin>>n;
	vector<int> v[n];
	for(int i=0;i<n;i++)
	{
		vector<int> ar1;
		int x;
		map<int,int> m;
		for(int j=0;j<n;j++)
		{
			int x;
			scanint(x);
			//cin>>x;
			ar1.push_back(x);
			m[x]=j;
		}
		sort(ar1.begin(),ar1.end());
		ll fir=0,sec=0;
		for(int j=0;j<n;j++)
		{
			x=m[ar1[j]];
			fir+=abs(x-j);
			sec+=abs(x-(n-1-j));
		}
		if(fir<sec)
		v[i]=ar1;
		else
		for(int j=0;j<n;j++)
		v[i].push_back(ar1[n-j-1]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",v[i][j]);
		}
		printf("\n");		
	}
}
