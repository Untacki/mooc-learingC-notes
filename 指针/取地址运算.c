#include<stdio.h>
int  main(void)
{
	int a=0;
	int p;
	//p=&a;
	p=(int)&a;
    printf("0x%x\n",p);
	printf("%p\n",&a);
	printf("%ld\n",sizeof(int));
	printf("%ld\n",sizeof(&a)); 
}
