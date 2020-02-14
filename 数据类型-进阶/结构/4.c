#include<stdio.h>
struct point{int x;
             int y;
};
struct point getStruct(void);
void output(struct point p);
int main(int argc,const char*argv[])
{
    struct point y={0,0};
    y=getStruct();//达到修改结构的目的 
    output(y);
    return 0;
}
struct point getStruct(void)//返回类型是struct point 返回结构变量 
{
	struct point p;
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	printf("%d,%d\n",p.x,p.y);
	return p;
}
void output(struct point p)
{
	printf("%d,%d\n",p.x,p.y);
}


