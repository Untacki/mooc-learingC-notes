#include<stdio.h>
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
int main(int argc, const char*argv[])
{
	int color=-1;
	char *ColorNames[NumCOLORS]={"red","yellow","green",};
	char *colorName=NULL;
	printf("请输入颜色代码：\n");
	scanf("%d",&color);
	if(color>=0&&color<NumCOLORS)
	{
		colorName=ColorNames[color];
	}
	else colorName="unknown";
	printf("颜色为：%s\n",colorName); 
	return 0;
 } 
