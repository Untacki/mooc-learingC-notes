#include<stdio.h>
struct date{int day;//�����µ����� 
            int month;
			int year; 
           }; 
int main(int argc,const char*argv[])
{
  struct date today;//todayΪ������struct date������ ���������ֽṹ���͵�һ�������� 
  
  today.day=02;
  today.month=8;
  today.year=2018;
  
  printf("Today is %i-%i-%i��\n",today.year,today.month,today.day);
  return 0;
}      

