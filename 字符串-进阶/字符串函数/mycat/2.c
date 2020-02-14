#include<stdio.h>
char *mycat(char *s1,char *s2)
{
   	char *p=s1;
	while(*s1++);
   	s1--;
   	while(*s1++=*s2++);
   	return p;
}
int main(int argc,const char *argv[])
{
	char s1[]="Hello,";
	char s2[]="World!";
	puts(mycat(s1,s2));
	return 0;
}
