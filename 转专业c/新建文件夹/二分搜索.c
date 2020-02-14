#include<stdio.h>
int search(int *a,int length,int num);

int main(void)
{
	printf("请输入数组的长度:");
	int length;
	scanf("%d",&length);
	int a[100];
	
	//int length=sizeof(a)/sizeof(a[0]);
	printf("请输入数组数字：");
	int i;
	for(i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}
	 int k;
	 printf("请输入要查找的数字:");
	 scanf("%d",&k);
	 int b=search(a,length,k); 
	 if(b>=0)
	 printf("数字%d的位置为a[%d]=%d\n",k,b,k);
	 else 
	 printf("查无此数") ;
	return 0;
}

int search(int *a,int length,int num)
{
     int low=0;
     int high=length-1;
	 int mid;
	 while(low<=high)
	 {
	 	mid=low+(high-low)/2;
		if(a[mid]==num){return mid;}
	    if(num<a[mid]){high=mid-1;}
	    if(num>a[mid]){low=mid+1;}	
	 }
     return -1;
}
