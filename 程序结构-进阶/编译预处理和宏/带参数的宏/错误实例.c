#include<stdio.h>
#define RAD1(x) ((x)* 57.29578)
#define RAD2(x) ((x)* 57.29578)
int main(int argc,const char*argv[])
{
    printf("%f\n",RAD1(5+2));
    printf("%f\n",RAD2(5+2)); 
    printf("%f\n",180/RAD2(1));
	return 0;
}
//带参数的宏的原则
//·一切都要括号 
//·整个值都要括号 
//·参数出现的每个地方都要括号
//·#define RAD(x) ((x)*57) 

//·可以带多个参数
#define MIN(a,b) ((a)>(b)?(b):(a)) 
//也可以组合（嵌套）使用其他宏 
 
