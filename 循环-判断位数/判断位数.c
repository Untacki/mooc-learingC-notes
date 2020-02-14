#include<stdio.h>
int main()
{
	int x=0,n=0;
	scanf("%d",&x);
	if(x>999)
	{
		n=4;
	}
	else if (x>100)
	{
		n=3;
	}
	else if (x>9)
	{
		n=2;
	}
	else{
		n=1;
	}
	printf("%d\n",n);
	return 0;
 } 
