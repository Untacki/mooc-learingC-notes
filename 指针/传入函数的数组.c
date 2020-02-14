#include<stdio.h>
void minmax(int a[],int len,int *max,int *min);

int main(void)
{
	int a[]={1,2,3,4,5,6,7,8,9,10,};
	printf("main sizeof(a)=%lu\n",sizeof(a));// main 函数里面的sizeof(a)
	printf("a=%p\n",a);//a的地址
	int min,max;
	minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
	printf("min=%d max=%d\n",min,max);
    printf("a[0]=%d\n",a[0]);
	int *p=&min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	printf("p[1]=%d\n",p[1]);
	return 0;
}

void minmax(int a[]/* 也可写作*a ，因函数参数表中的数组实际为指针*/,int len,int *max,int *min)
{
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	printf("a=%p\n",a);
	*max=*min=a[0];
	int i;
	for(i=0;i<len;i++)
	{
		if(*min>a[i])
		{
			*min=a[i];
		}
		if (*max<a[i]){
		   *max=a[i];
		}
	}
}
