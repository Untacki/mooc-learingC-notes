#include<stdio.h>
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI //PI * 2
#define PRT printf("%f\n",PI);\
            printf("%f\n",PI2)
int main(int argc,const char*argv[])
{
	printf(FORMAT,PI2*3.0);
	PRT;
	return 0;
} 
