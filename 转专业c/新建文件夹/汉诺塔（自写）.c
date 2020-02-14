#include<stdio.h>
void hanoi(int n,char a,char b,char c);
void move(int n,char a,char b);
int count=0;
int main(void)
{
	int num;
	printf("���������:");
	scanf("%d",&num);
	hanoi(num,'A','B','C');
	return 0;
 }
 
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
	move(n,a,c);
	else{
	hanoi(n-1,a,c,b);
	move(n,a,c);
	hanoi(n-1,b,a,c);
        }
}

void move(int n,char a,char b)
{
	count++;
	printf("��%d���ƶ�����%d��%c�ƶ���%c\n",count,n,a,b);
 } 
