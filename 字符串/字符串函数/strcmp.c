#include<stdio.h>
#include<string.h>
int main(int argc,char const *argv[])
{
	char s1[]="abc";
	char s2[]="abc ";
	//printf("%d\n",s1==s2);
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;
} 
