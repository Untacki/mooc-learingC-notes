#include<stdio.h>
int main()
{
    int hour1,hour2;
    int minute1,minute2;
    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);
    int a=hour2-hour1;
    int b=minute2-minute1;
    if (b<0)
    {
    	b=b+60;
    	a--;
	}
	printf("时间差为%d时%d分。\n",a,b);
	return 0;
}
