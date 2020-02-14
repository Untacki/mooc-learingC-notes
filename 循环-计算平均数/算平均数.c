#include<stdio.h>
int main(void)
{
	int x=0,n=0;
	double sum=0;
	
	/*do {
		scanf("%d",&x);
		if (x!=-1){
		sum+=x;
		n++;}
	}
	while(x!=-1);
	printf("%f",sum/n);*/	
	scanf("%d",&x);
	while(x!=-1)
	{
		sum+=x;
		n++;
		scanf("%d",&x);
	}
	printf("%f\n",sum/n);
	return 0;
 } 
