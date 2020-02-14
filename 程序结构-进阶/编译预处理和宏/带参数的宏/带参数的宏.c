#include<stdio.h>
#define cube(x) ((x)*(x)*(x))
//宏可以带参数
int main(int argc,const char*argv[])
{
	printf("%d\n",cube(5));
	int i=2;
	printf("%d\n",cube(i+2)); 
	return 0;
}

