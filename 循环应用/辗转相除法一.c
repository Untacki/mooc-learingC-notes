#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	int ins;
	int x;
	if (a>b)
	{
		ins=b;
	}
	else{
		ins=a;
	}
	for(i=2;i<=ins;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				x=i;
			}
		}
	 } 
	 printf("%d��%d�����Լ��Ϊ%d\n",a,b,x);
	return 0;
}
