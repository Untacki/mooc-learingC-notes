#include<stdio.h>
#define size 5
void f(int *s,int len);
int main(void)
{
	int a[size]={10,9,7,5,1,};
	f(a,size);
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void f(int *s,int len)
{
	int i,j;
	int temp;
	for(i=0;i<len;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
}
