#include<bits/stdc++.h>
using namespace std;
 
int solve(int *arr, int n)
{
    int l[n+1],r[n+1];
    int w= 0;
    l[0] = arr[0];
    for (int i = 1; i < n; i++)
       l[i] = max(l[i-1], arr[i]);
    r[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
       r[i] = max(r[i+1], arr[i]);
    for (int i = 0; i < n; i++)
       w += min(l[i],r[i]) - arr[i];
 
    return w;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int ar[n+1];
   	for(int i=0;i<n;i++)
   	cin>>ar[i];
   	cout<<solve(ar,n)<<endl;
   }
    return 0;
}
