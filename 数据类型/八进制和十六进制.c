#include<stdio.h>
int main(void)
{
	char c=012;
	int a=0x12;
	//printf("c=%d  a=%d\n",c,a); //%d表示按十进制输出 
	printf("c=%o  a=%x",c,a);
	return 0;
}
