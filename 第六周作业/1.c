#include<stdio.h>
int  su(int a);
int main(void)
{
	int n;
	scanf("%d",&n);
	if(su(n)==n)
	{
		printf("%d=%d",n,n);
	}
	else
	{
	     printf("%d=",n);
	     int c=su(n);
	     printf("%dx",c);
	     n/=c;
	     if(su(n)==n)
	     {
	     	printf("%d",n);
		 }
		 else
		 {
		   do
		   {
		   	printf("%d",su(n));
		   	if(su(n)!=n)
		   	{
		   		printf("x");
			}
			n/=su(n);
			if(su(n)==n)
			printf("%d",n);
			}
			while(su(n)!=n);
		 }
	}
	return 0;
}

int  su(int a)
{
     int i;
     for(i=2;i<a;i++)
     {
     	if(a%i==0)
     	{
			 break;
		 }
	 }
	 return i;
 } 

