#include<stdio.h>

int gAll=12;
void f(void);
int main(int argc,const char *argv[])
{
	printf("in %s gALL is %d\n",__func__,gAll);
	f();
	printf("agn in %s gALL is %d\n",__func__,gAll);
	return 0;
}
void f()
{
	int gAll=1;
	printf("in %s gALL is %d\n",__func__,gAll);
	gAll+=2;
	printf("agn in %s gALL is %d\n",__func__,gAll);
} 
