#include<stdio.h>
int main(void)
{
	const int maxnumber=25;
	int isprime[maxnumber];
	int i;
	int x;
	for(i=0;i<maxnumber;i++)
	{
		isprime[i]=1;
	}
	for(x=2;x<maxnumber;x++)
	{
		if(isprime[x])
		{
			for(i=2;x*i<maxnumber;i++)
			{
			 isprime[x*i]=0;
		    }
		}
	   int u;
	   printf("%d\t",x);
	   for(u=0;u<maxnumber;u++)
	   {
	   printf("%d\t",isprime[u]);
       }
       printf("\n");
	}
	for(i=2;i<maxnumber;i++)
	{
		if(isprime[i])
		printf("%d\t",i);
	}
	printf("\n");
}
