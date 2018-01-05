#include<stdio.h>
typedef long long int ll;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll c,d,l;
		scanf("%lld%lld%lld",&c,&d,&l);
		if(c==0&&d==0)
		{
			if(l==0)
			printf("yes\n");
			else
			printf("no\n");
			continue;
		}
		ll total=(c+d)*4;
		if(l>total||(l<(d*4))||l%4!=0)
		printf("no\n");
		else
		{
			ll anim=l/4;
			if(c==0)
			{
				if(d==anim)
				printf("yes\n");
				else
				printf("no\n");
				continue;
			}
			if(d==0)
			{
				if(c==anim)
				printf("yes\n");
				else
				printf("no\n");
				continue;
			}
			ll cat=c-2*d;
			if(cat>=0){
			if((anim>=(d+(c-2*d)))&&(anim<=c+d))
			printf("yes\n");
			else
			printf("no\n");
			}
			else
			{
				if((anim>=d)&&(anim<=c+d))
				printf("yes\n");
				else
				printf("no\n");
			}
			
		}
	}
	return 0;
}
