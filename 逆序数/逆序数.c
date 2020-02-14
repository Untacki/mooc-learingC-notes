#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b,c,d;
	b=a%10;
	c=a/100;
	d=a/10%10;/*ªÚ’ﬂd=a%100/10*/ 
	printf("%d",100*b+10*d+c);
	return 0;
}
