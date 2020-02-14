#include<stdio.h>
int main(void)
{
	int x=0;
   	scanf("%d",&x);
	int i=0;
	i=x;
	int mask=1;
	while(i>9) 
	{
		mask*=10;
		i/=10;
	}
	//printf("%d",mask);
	int t=0;
	while(mask>0)
	{
		printf("%d",x/mask);
		x%=mask;
		mask/=10;
		if(mask>0)
		{
			printf(" ");
		}
	}
	
	
	
	
	
	return 0;
}

