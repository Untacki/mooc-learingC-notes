#include<stdio.h>
int main()
{
	int a,b;
	printf("��������ߵ�Ӣ����Ӣ��:");
	scanf("%d %d",&a,&b);/*����Ϊdouble��������%lf��*/ 
	double C=0.3048;
	printf("���Ϊ%f��",(a+b/12.0)*C) ;/*��������ʱ��Ҫ������һ��������,��������%f*/ 
	return 0;
 } 
