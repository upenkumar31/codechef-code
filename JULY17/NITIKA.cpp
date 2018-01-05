#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	while(getline(cin,s))
	{
		if(s.size()>0){
		int i=0,space=0;
		int len=s.size();
		int ind[5],j=1;
		ind[0]=-1;
		while(s[i]!='\0')
		{
			if(s[i]==' ')
			{
				space++;
				ind[j++]=i;
			}
			i++;
		}
		j=0;
		while(space>0)
		{
			int x=(int)s[ind[j]+1];
			if(x>96&&x<123)
			cout<<(char)(x-32)<<"."<<" ";
			else
			cout<<s[ind[j]+1]<<"."<<" ";
			space--;
			j++;
		}
		int x=(int)s[ind[j]+1];
		if(x>96&&x<123)
		cout<<(char)(x-32);
		else
		cout<<s[ind[j]+1];
		j=ind[j]+2;
		for(i=j;i<len;i++)
		{
			int x=s[i];
			if(x>64&&x<91)
			cout<<(char)(x+32);
			else
			cout<<s[i];
		}
		cout<<endl;
		}
	}
	return 0;
}
