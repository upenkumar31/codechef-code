#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll getMid(ll s, ll e) {  return s + (e -s)/2;  }
ll getSumUtil(ll *st, ll ss, ll se, ll qs, ll qe, ll si)
{
    if (qs <= ss && qe >= se)
        return st[si];
    if (se < qs || ss > qe)
        return 0;
    ll mid = getMid(ss, se);
    return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
           getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}
void updateValueUtil(ll *st, ll ss, ll se, ll i, ll diff, ll si)
{
    if (i < ss || i > se)
        return;
    st[si] = st[si] + diff;
    if (se != ss)
    {
        ll mid = getMid(ss, se);
        updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
        updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
    }
}
void updateValue(ll arr[], ll *st, ll n, ll i, ll new_val)
{
 
   
    ll diff = new_val - arr[i];
 
    // Update the value in array
    arr[i] = new_val;
 
    // Update the values of nodes in segment tree
    updateValueUtil(st, 0, n-1, i, diff, 0);
}
 
// Return sum of elements in range from index qs (quey start)
// to qe (query end).  It mainly uses getSumUtil()
ll getSum(ll *st, ll n, ll qs, ll qe)
{
 
    return getSumUtil(st, 0, n-1, qs, qe, 0);
}
 
// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
ll constructSTUtil(ll arr[], ll ss, ll se, ll *st, ll si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    // If there are more than one elements, then recur for left and
    // right subtrees and store the sum of values in this node
    ll mid = getMid(ss, se);
    st[si] =  constructSTUtil(arr, ss, mid, st, si*2+1) +
              constructSTUtil(arr, mid+1, se, st, si*2+2);
    return st[si];
}
 
ll *constructST(ll arr[], ll n)
{
    // Allocate memory for segment tree
 
    //Height of segment tree
    ll x = (ll)(ceil(log2(n))); 
 
    //Maximum size of segment tree
    ll max_size = 2*(ll)pow(2, x) - 1; 
 
    // Allocate memory
    ll *st = new ll[max_size];
 
    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);
 
    // Return the constructed segment tree
    return st;
}
 
// Driver program to test above functions
int main()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    ll *st = constructST(arr, n);
    ll q;
    cin>>q;
    ll x,y;
    char ch;
    for(ll i=0;i<n;i++)
    {
		cin>>ch>>x>>y;
		if(ch=='A')
		{
			cout<<getSum(st, n, x-1, y-1)<<endl;
		}
		if(ch=='U')
		{
			updateValue(arr, st, n, x-1, y);
		}
		if(ch=='M')
		{
			ll max=arr[x-1];
			for(ll j=x;j<y;j++)
			if(max<arr[j])
			max=arr[j];
			cout<<max<<endl;
		}
		if(ch=='m')
		{
			ll min=arr[x-1];
			for(ll j=x;j<y;j++)
			if(min>arr[j])
			min=arr[j];
			cout<<min<<endl;
		}
		if(ch=='S')
		{
			ll max=arr[x-1];
			for(ll j=x;j<y;j++)
			if(max<arr[j])
			max=arr[j];
			ll max2=0;
			for(ll j=x-1;j<y;j++)
			if(max2<arr[j]&&arr[j]!=max)
			max2=arr[j];
			if(x==y)
			max2=max;
			cout<<max2<<endl;
		}
		if(ch=='s')
		{
			ll max=arr[x-1];
			for(ll j=x;j<y;j++)
			if(max>arr[j])
			max=arr[j];
			ll max2=LONG_LONG_MAX;
			for(ll j=x-1;j<y;j++)
			if(max2>arr[j]&&arr[j]!=max)
			max2=arr[j];
			if(x==y)
			max2=max;
			cout<<max2<<endl;
		}
	}
    return 0;
}
