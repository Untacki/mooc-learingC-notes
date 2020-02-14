//结构指针作为参数
#include<stdio.h>
struct point{int x;
             int y;
}; 
struct point* getStruct(struct point *p);
void output(struct point d);
void print(const struct point *p);
int main(int argc,const char*argv[])
{
	struct point a={0,0};
	getStruct(&a);
	output(a);
	output(*getStruct(&a));
	print(getStruct(&a));
	//*getStruct(&a)=(struct point){1,2}; 
	return 0;
}
struct point* getStruct(struct point *p)
{
	scanf("%d",&p->x);
	scanf("%d",&p->y);
	printf("1%d,%d\n",p->x,p->y);
	return p;
}
void output(struct point d)
{
	printf("2%d,%d\n",d.x,d.y);
}
void print(const struct point *p)
{
	printf("3%d,%d\n",p->x,p->y);
}
