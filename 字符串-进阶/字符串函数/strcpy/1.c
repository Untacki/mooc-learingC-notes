#include<stdio.h>
#include<string.h>
char *mycpy(char *dst,const char *src)
{
//	int idx=0;
//	while(src[idx]!='\0')
//	{
//		dst[idx]=src[idx];
//		idx++;
//	}
//	dst[idx]='\0';
//	return dst;
char *ret=dst;
//while(*src)
//{
//	*dst++=*src++;
//}
while(*dst++ = *src++)
        ;   
   *dst='\0';
   return ret;
}
int main(int argc,char const *argv[])
{
	char s1[]="you arde adad ed";
	char s2[]="abcd";
	char *t=mycpy(s1,s2);
	puts(t);
	return 0; 
}
