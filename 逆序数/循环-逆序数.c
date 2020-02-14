#include<stdio.h>
int main(void)
{
    int number=0,c=0;
    int a=0,b=0;
	do{
	
		scanf("%d",&number);
		if(number!=-1)
		{
		c=number%2;
		if(c!=0)
		{
			a++;
		}
		else{
			b++;
		}
	}
}
while(number!=-1);
printf("%d %d",a,b);
	return 0;
 } 
