#include<stdio.h>
void quicksort(int *a,int left,int right);

int main(void)
{
	//int a[9]={10,9,8,5,12,32,1,4,7};
	int a[6]={45,80,55,40,42,85};
	int length=sizeof(a)/sizeof(a[0]);
	printf("原数组为:");
	int i;
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	quicksort(a,0,length-1);
	printf("\n排序后数组为:");
	for(i=0;i<length;i++)
	printf("%d ",a[i]); 
	return 0;
}

void quicksort(int *a,int left,int right)
{
   if(left>=right){
   return ;
   }
   int i=left;
   int j=right;
   int key=a[i];
   while(i<j)
   {
   	   while(i<j&&a[j]>=key){j--;}
   	   if(i<j){a[i]=a[j]; i++;}
	   while(i<j&&a[i]<=key){i++;}
	   if(i<j){a[j]=a[i]; j--;}
   }
   a[i]=key;
   quicksort(a,left,i-1);
   quicksort(a,i+1,right);
}
