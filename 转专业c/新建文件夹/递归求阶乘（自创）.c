#include<stdio.h>
int factorial(int num,int s);

int main(void)
{
	printf("请输入数字:");
	int num;
	scanf("%d",&num);
	if(num<0)
	{
	printf("数据错误\n");
    }
	else
	printf("\n%d！=%d",num,factorial(num,1));
	return 0;
}

int factorial(int num,int s)
{
	if(num<=1)
    return s;
	s*=num;
	factorial(num-1,s);
} 
