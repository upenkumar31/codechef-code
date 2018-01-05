#include<bits/stdc++.h>
using namespace std;
int ci(vector<int> &v, int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (v[m] >= key)
        r = m;
    else
        l = m;
    }
 
    return r;
}
 
int lis(vector<int> &v,int l,int r) {
    if (v.size() == 0)
        return 0;
    std::vector<int> tail(v.size(), 0);
    int length = 1; 
    tail[0] = v[l-1];
    for (size_t i =l; i<r; i++) {
        if (v[i] < tail[0])
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            tail[length++] = v[i];
        else
            tail[ci(tail, -1, length-1, v[i])] = v[i];
    }
 
    return length;
}
 
int main() {
    
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>n>>m;
		vector<int> v(n+1);
		for(int i=0;i<n;i++)
		cin>>v[i];
		for(int i=0;i<m;i++)
		{
			int l,r;
			cin>>l>>r;
			cout<<lis(v,l,r)<<endl;
		}
	}   return 0;
}
