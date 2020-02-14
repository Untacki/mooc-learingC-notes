#include<stdio.h>
int main(void)
{
	int i=0;
	printf("&i=%p\n",&i);
    char* a1="Hello World!";
    //a[0]='B';
    char* a2="Hello World!";
	printf("a1=%p\n",a1);
	printf("a2=%p\n",a2);
	printf("a1[0]=%c\n",a1[0]); 
	return 0;
} 
