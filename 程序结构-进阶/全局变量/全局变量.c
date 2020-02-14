#include<stdio.h>

int gALL;
int g2=gALL;

//const int gAll=12;
//int g2=gAll;
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
	printf("in %s gALL is %d\n",__func__,gAll);
	//gALL+=2;
	printf("agn in %s gALL is %d\n",__func__,gAll);
} 
