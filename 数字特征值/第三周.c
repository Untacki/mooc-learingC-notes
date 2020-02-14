#include<stdio.h>
int main(void)
{
    int num=0,a=0;
    int b=1;
	int c=0,d=1;
	int s=0;
	int e=1;
	int out=0;
    scanf("%d",&num);
	do{
		a=num%10;
		num/=10;
		c=a%2;//数字积偶 
		d=b%2;//数位积偶 
		b++;
		if(c==0)
		{
			if(d==0)
			{
			  s=1;	
			}
			else{
				s=0;
			}
		}
		else{
		if (d!=0)
			{
				s=1;
			}
			else{
				s=0;
			}
		}
		out=out+s*e;
	    e*=2;
	} while(num!=0);
	printf("%d\n",out);
	return 0;
 } 
