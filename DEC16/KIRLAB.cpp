#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 100009
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
bool check[MAX];
int total;
int dfs(vector<int> v[],int root,int *v1)
{
	if(v[root].empty())
	return 1;
	if(check[root]==true)
	return v1[root];
	int x=0;
	check[root]=true;
		for(int i=0;i<v[root].size();i++) 
		{
			int sub=dfs(v,v[root][i],v1);
			x=max(x,1+sub);
			v1[v[root][i]]=sub;
		}
		return x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		total=0;
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<"1"<<endl;
			continue;
		}
		int arr[n+1],v1[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			check[i]=false;
			v1[i]=0;
		}
		vector<int> v[n+9];
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(gcd(max(arr[i],arr[j]),min(arr[i],arr[j]))>1){
				v[i].push_back(j);
			}
			}
		}	int mx=0;
			for(int i=0;i<n;i++){
			if(check[i]==false){
			total=dfs(v,i,v1);
			mx=max(total,mx);
			}
			}
    		cout<<mx<<endl;
	}
}
