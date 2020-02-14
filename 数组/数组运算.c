#include<stdio.h>
int main(void)
{
	int a[]={[1]=2,4,[5]=6};
	int i;
	for (i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
} 
