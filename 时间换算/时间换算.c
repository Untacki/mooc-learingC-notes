#include<stdio.h>
int main(void)
{
    int BJT;
    scanf("%d",&BJT);
    int a,b;
    a=BJT/100;
    b=BJT%100;
    if (a>=8)
    {
    	printf("%d",100*(a-8)+b);
	} 
	else
    {
    	printf("%d",100*(a+16)+b);
	} 
	return 0;
 } 
