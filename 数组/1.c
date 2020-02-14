#include<stdio.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	int number[100];
	int cnt=0;
	double sum=0;
	while(x!=-1)
	{
		 number[cnt]=x;
		 sum+=x;
		 cnt++;
		 scanf("%d",&x);
	}
	if(cnt>0)
	{
		double average=sum/cnt;
		printf("平均数为%f\n",average);
		int i;
		for(i=0;i<cnt;i++)
		{
			if(number[i]>average)
			{
			   printf("%d\n",number[i]);
			}
		}
	}
	return 0;
 } 
