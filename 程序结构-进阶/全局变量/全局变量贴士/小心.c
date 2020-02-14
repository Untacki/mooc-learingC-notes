#include<stdio.h>
int* f(void);
void k(void);
int main(int argc,const char *argv[])
{
	int *p=f();
	printf("*p=%d\n",*p);
	printf("address of k=%p\n",p);
	k();
	printf("*p=%d\n",*p);
	return 0;
}
int* f(void)
{
	int k=0;
	return &k;
}
void k(void)
{
	int a=1;
	printf("a=%d\n",a);
	printf("address of a=%p\n",&a); 
} 
