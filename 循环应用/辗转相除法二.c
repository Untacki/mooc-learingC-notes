#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c=a,d=b;
	int yu;
	while(b!=0)
	{
		yu=a%b;
		a=b;
		b=yu;
	}
				    /*do{
						yu=a%b;
						a=b;
						b=yu;
					}
					while(b!=0);*/
	printf("%d��%d�����Լ��Ϊ%d",c,d,a);
	return 0;
}
