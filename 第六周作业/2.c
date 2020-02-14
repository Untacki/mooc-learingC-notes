#include<stdio.h>
int wan(int a);

int main(void)
{
	int c,d;
	int r=0;
	scanf("%d %d",&c,&d);
	while(c<=d)
	{
		if(wan(c)==1)
		{
	      printf("%d",c);
		if(c<d)
			{
				printf(" ");
			}
          r=1;
		}
		c++;
   }
   if(r==0)
   {
   	printf("NIL\n");
   }
	return 0;
}

int wan(int a)
{
	int ret=0;
	int sum=0;
	int i;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
	    sum+=i;
	if(sum==a)
	{
		ret=1;
		break;
	}
   }
	return ret;
 } 
