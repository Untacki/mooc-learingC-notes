#include<stdio.h>
int main(void)
{
	printf("ÇëÊäÈëÊı×Ö:");
	int num;
	scanf("%d",&num);
	int ret=num;
	int s=1;
	while(num>=1)
	{
		s*=num;
		num--;
	}
	printf("\n%d£¡=%d",ret,s);
	return 0;
 } 
