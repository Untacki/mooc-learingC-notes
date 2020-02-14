#include<stdio.h>
#include<string.h>
int mylen(const char *s)
{
	int cent=0;
	while(s[cent]!='\0')
	{cent++;}
	return cent;
}
int main(int argc,const char *argv[])
{
     char line[]={"hello"};
     printf("strlen=%d\n",strlen(line));
     printf("mylen=%d\n",mylen(line));
     printf("sizeof=%d\n",sizeof(line));
	 return 0;
} 
