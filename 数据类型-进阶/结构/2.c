#include<stdio.h>
struct date{int month;
            int day;
            int year;
}; 
int main(int argc,const char*argv[])
{
	struct date today;
	today=(struct date){8,04,2018};
	struct date day;
    
    struct date *pDate=&today;//需要加&
	day=today;
	day.day=05;//这句说明day与today是完全不同的变量，结构并无指针特性 
	printf("today is %i-%i-%i\n",today.year,today.month,today.day);
	printf("  day is %i-%i-%i\n",day.year,day.month,day.day);
	printf("address of today is %p\n",pDate);
	return 0;
}
