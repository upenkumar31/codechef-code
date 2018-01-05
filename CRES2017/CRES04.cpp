#include <iostream>
using namespace std;
bool pali(string str)
{
    int count[256] = {0};
    for (int i = 0; str[i];  i++)
        count[str[i]]++;
    int odd = 0;
    for (int i = 0; i <256; i++)
        if (count[i] & 1)
            odd++;
    return (odd <= 1);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>=97&&s[i]<=122)
			s[i]=s[i]-32;
		}
		if(pali(s))
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
  return 0;
}
