#include<stdio.h>
void f(int *p);
int main(void)
{
	int i=0;
	f(&i);
	return 0;
 }
 
void f(int *p)
{
	printf("p=%p\n",p);
	*p+=1;
	printf("i=%d\n",*p);
    //printf("i=%d\n",p);
}
