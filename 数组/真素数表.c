#include<stdio.h>
int isprime(int x);

int main(void)
{
	int n;
	scanf("%d",&n);
	int v;
    int prime[n] ;
	for(v=0;v<n;v++)
	{
		prime[v]=1;
	}
	int x=2;
    int i;
    int t=0;
    while(x<n)
    {
	if(isprime(x))
	{
	for(i=2;x*i<n;i++)
    {
    	prime[x*i]=0;
	}
    t++;
	}
	x++;
    }
    int u;
	for(u=0;u<t;u++)
	{ 
	printf("%d\t",prime[u]);
    }
	return 0;
 } 
 
 int isprime(int x)
 {
 	int ret=1;
 	int i;
 	for(i=2;i<x;i++)
 	{
 		if(x%i==0)
 		{
 			ret=0;
 			break;
		 }
	 }
	 return ret;
 }
 
