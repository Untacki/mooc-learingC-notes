#include<stdio.h>
int f(int n);

int main(void)
{
	int num;
	printf("����������:");
	scanf("%d",&num);
	int i;
	printf("쳲��������е�ǰ%d��Ϊ��\n",num);
	for(i=1;i<=num;i++)
	{
		printf("%d",f(i));
		if(i<num)
		printf(",");
		if(i%5==0)
		printf("\n");
		
	}
	return 0;
}
int f(int n)
{
	if(n<=2)
	return 1;
	int i;
	int num1,num2;
	num1=num2=1; 
	int num3;
	for(i=2;i<n;i++)
	{
		num3=num1+num2;
		num1=num2;
		num2=num3;
	}
	return num3;
} 
