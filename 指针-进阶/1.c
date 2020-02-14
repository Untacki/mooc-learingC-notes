#include<stdio.h>
//@return 为判断函数，若成立，返回1，不成立，返回0 
int divide(int a,int b,int *result); 
int main(void)
{
	int a=5,b=2;
	int c;
	if(divide(a,b,&c))
	printf("%d/%d=%d\n",a,b,c);
	else
	printf("错误\n"); 
}
int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0) ret=0;
	else
	*result=a/b;
	return ret;
}
