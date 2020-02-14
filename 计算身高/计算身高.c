#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入身高的英尺与英寸:");
	scanf("%d %d",&a,&b);/*若改为double型则需用%lf。*/ 
	double C=0.3048;
	printf("身高为%f米",(a+b/12.0)*C) ;/*数据运算时需要至少有一个浮点数,浮点数用%f*/ 
	return 0;
 } 
