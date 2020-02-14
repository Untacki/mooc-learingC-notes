#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int fact=1;
	int i=n;
	for(;n>1;n--)
	{
		fact *=n;
	}
	/*int i;
	for(i=1;i<=n;i++)
	{
		fact *=i;
	}*/
	printf("%d!Ϊ%d",i,fact);
	return 0;
 } 
