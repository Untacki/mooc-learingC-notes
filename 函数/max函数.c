#include<stdio.h>
		int max(int a,int b)
		{
			int ret;
			if(a>b)
			{
				ret=a;
			}
			else
			{
				ret=b;
			}
			return ret;
		}
		
		
	int main(void)
	{
		int c=max(5,6);
		max(3,4);
		printf("%d\n",max(5,6));
		
	}

