#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int k;
	cin>>k;
	if(k>26)
	k=k%26;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			if(s[i]+k>90)
			printf("%c",(s[i]+k)-90+64);
			else
			printf("%c",(s[i]+k));
		}
		else if(s[i]>=97&&s[i]<=122)
		{
			if(s[i]+k>122)
			printf("%c",(s[i]+k)-122+96);
			else
			printf("%c",(s[i]+k));
		}
		else
		printf("%c",s[i]);
	}
}
