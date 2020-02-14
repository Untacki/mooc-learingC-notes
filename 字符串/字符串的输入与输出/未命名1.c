#include<stdio.h>
int main(void)
{
	char* s="hello";
	char* t;
	s=t;
	printf("s=%p\n",s);
	printf("t=%p\n",t);
	return 0;
} 
