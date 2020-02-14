#include<stdio.h>
int main(void)
{
	char a[]={1,2,3,4,5,};
	//puts(*a);
	char *p=a;
	printf("%d\n",*(++p)); 
	return 0;
} 
