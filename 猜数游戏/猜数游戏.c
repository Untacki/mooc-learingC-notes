#include<stdio.h>
int main(void)
{
    int number=0,a=0,b=0;
	scanf("%d",&number);
	do{
		a=number%10;
		printf("%d",a);
	    number/=10;
	    /*b=b*10+a;*/
	} 
	while(number!=0);
	//printf("ÄæĞòÊıÎª%d",a);
	return 0;
 } 
