#include<stdio.h>
int search(int *a,int length,int num);

int main(void)
{
	printf("����������ĳ���:");
	int length;
	scanf("%d",&length);
	int a[100];
	
	//int length=sizeof(a)/sizeof(a[0]);
	printf("�������������֣�");
	int i;
	for(i=0;i<length;i++)
	{
		scanf("%d",&a[i]);
	}
	 int k;
	 printf("������Ҫ���ҵ�����:");
	 scanf("%d",&k);
	 int b=search(a,length,k); 
	 if(b>=0)
	 printf("����%d��λ��Ϊa[%d]=%d\n",k,b,k);
	 else 
	 printf("���޴���") ;
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
