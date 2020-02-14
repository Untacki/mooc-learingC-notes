#include<stdio.h>
void f(int * const p);
int main(void)
{
	int b[]={1,2,3,4,};
	f(b);
	printf("b[0]=%d\n",b[0]);
	printf("sizeof(b)=%p\n",sizeof(b));
	return 0;
}
void f(int * const p)
{
	//p[0]++;
	printf("sizeof(p)=%p\n",sizeof(p));
	printf("p[0]=%d\n",p[0]); 
}
//结果证明数组变量不是指针 
  
