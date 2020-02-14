#include<stdio.h>
int main(void)
{
//	printf("sizeof(int)=%ld\n",sizeof(int));
//	printf("sizeof(double)=%ld\n",sizeof(double));
//	printf("sizeof(long double)=%ld\n",sizeof(long double));
    int a=7;
    //printf("sizeof(a)=%ld\n",sizeof(a++));
    printf("sizeof(a+1.0)=%ld\n",sizeof(a+1.0));//a+1.0Ϊdouble 
    printf("a=%d\n",a);

	return 0;
}
