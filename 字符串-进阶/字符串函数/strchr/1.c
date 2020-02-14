#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,const char *argv[])
{
	char a[]="hello";
	char *p=strchr(a,'l');
	char *t=(char *)malloc(strlen(p)+1);
	char c=*p;
	*p='\0';
	strcpy(t,a);
	puts(t);
	free(t);
	return 0;
 } 
