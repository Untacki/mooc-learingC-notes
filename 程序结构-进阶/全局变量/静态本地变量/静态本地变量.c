#include<stdio.h>

int gAll=12;
void f(void);
int main(int argc,const char *argv[])
{
	f();
//	f();
//	f(); 
	return 0;
}
void f()
{
	int k=0;
	int a=1;
	static int g2=1;
//	printf("in %s gALL is %d\n",__func__,gAll);
//	gAll+=2;
//	printf("agn in %s gALL is %d\n",__func__,gAll);
    printf("address of    k=%p\n",&k);
    printf("address of    a=%p\n",&a);
    printf("address of   g2=%p\n",&g2);
    printf("address of gAll=%p\n",&gAll);
} 
