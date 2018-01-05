#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1[4],s2[4];
		cin>>s1[0]>>s1[1]>>s1[2]>>s1[3];
		cin>>s2[0]>>s2[1]>>s2[2]>>s2[3];
		int i=0,j=0,c=0;
		while(i<4)
		{
			j=0;
			while(j<4)
			{
				if(s1[i]==s2[j])
				{
					c++;
				}
				j++;
			}
			i++;
		}
		if(c>=2)
		cout<<"similar"<<endl;
		else
		cout<<"dissimilar"<<endl;
	}
}
