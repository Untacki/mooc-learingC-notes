#include<stdio.h>
int main(void)
{
	int n=0,i=0;
	scanf("%d",&n);
	double sum=0.0;
	int sign=-1; 
	for(i=1;i<=n;i++)
	{
		sign=-sign;
		sum=sum+sign*(1.0/i);//sum+=1.0/i;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}
