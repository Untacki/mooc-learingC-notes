#include<stdio.h>
int floor1(int num);

int main(void)
{
	printf("输入阶梯的层数为:");
	int num;
	scanf("%d",&num);
	printf("\n共有%d种方法",floor1(num));
	return 0;
}

int floor1(int num)
{
	if(num<=2)
	return num;
	else
	return (floor1(num-1)+floor1(num-2));
}
 
