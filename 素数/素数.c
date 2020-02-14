#include<stdio.h>
int main(void)
{
	int x;
	int one,two,five;
	int exit=0;
	scanf("%d",&x);
	for(one=1;one<x*10;one++)
	{
		for(two=1;two<x*10/2;two++)
		{
			for(five=1;five<x*10/5;five++)
			{
				if(one+2*two+5*five==x*10)
				{
					printf("可以用%d个1角%d个两毛%d个五毛组成%d元",one,two,five,x);
					exit=1;
					break;
				}
			}
			if(exit) break;
		}
		if(exit) break;
	}
	return 0; 
 } 
