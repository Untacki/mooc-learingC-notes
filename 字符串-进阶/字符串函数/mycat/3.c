//这是另一种方法，这种方法不会改变这两个字符串。 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *mycat(const char*s1,const char*s2)
{
	char *p=(char*)malloc(strlen(s1)+strlen(s2)+1);
	strcpy(p,s1);
	char *ret=p;
	while(*p++);
	p--;
	while(*p++=*s2++);
	free(ret);
	return ret;
}
int main(int argc,char const*argv[])
{
	char s1[]="hello,";
	char s2[]="world!";
	puts(mycat(s1,s2));
	puts(s1);
	puts(s2);
	return 0;
}

