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
					printf("������%d��1��%d����ë%d����ë���%dԪ",one,two,five,x);
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
