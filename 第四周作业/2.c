#include<stdio.h>
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i=2;
	int t=0;
	while(t!=n)
	{
	int d=2;
	int ret=1;
	for(d;d<i;d++)
	{
		if(i%d==0)
		{
			ret=0;
			break;
		}
	}
		if(ret)
		{
			t++;
		}
		i++;
	}
	int c=i-1;
	int sum=c;
	while(t!=m)
	{
		c++;
	int d=2;
	int ret=1;
	for(d;d<c;d++)
	{
		if(c%d==0)
		{
			ret=0;
			break;
		}
	}
		if(ret)
		{
			sum+=c;
			t++;
		}
	}
	printf("%d",sum);
	return 0;
}
