#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,a,n,x=0;
	cin>>b>>a;
	int c=b-a;
	if(c%10==9)
	c--;
	else
	c++;
	cout<<c<<endl;
}
