#include<stdio.h>
int floor1(int num);

int main(void)
{
	printf("������ݵĲ���Ϊ:");
	int num;
	scanf("%d",&num);
	printf("\n����%d�ַ���",floor1(num));
	return 0;
}

int floor1(int num)
{
	if(num<=2)
	return num;
	else
	return (floor1(num-1)+floor1(num-2));
}
 
