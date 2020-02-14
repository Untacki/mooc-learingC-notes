#include<stdio.h>
void sum(int begin,int end)//函数头   void为返回类型，意为不返回任何值 
{
int sum=0;
int i;
for(i=begin;i<=end;i++)
{
	sum+=i;
	
}
printf("%d到%d的和是%d\n",begin,end,sum);
}

int main(void)
{
	sum(10,20);
	sum(20,30);
	sum(30,40);
	return 0;
 } 
