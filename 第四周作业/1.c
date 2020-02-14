#include<stdio.h>
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i;
	i=n;
	int sum=0;
	while(i<=m)
	{
		int t=2;
		int pe=0;
		for(t;t<i;t++)
		{
			if(i%t==0)
			{
				pe=1;
				break;	
			}
			
		}
		if(pe)
		{
			i++;
			continue;
		}
		else
		{
			sum+=i;
			i++;
		}
	}
	printf("%d",sum);
	return 0;
 } 
