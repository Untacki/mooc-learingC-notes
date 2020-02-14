#include<stdio.h>
struct date{int day;//声明新的类型 
            int month;
			int year; 
           }; 
int main(int argc,const char*argv[])
{
  struct date today;//today为变量，struct date是类型 （定义这种结构类型的一个变量） 
  
  today.day=02;
  today.month=8;
  today.year=2018;
  
  printf("Today is %i-%i-%i。\n",today.year,today.month,today.day);
  return 0;
}      

