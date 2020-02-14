#include<stdio.h>
void hanoi(int n,char a,char b,char c);
void move(int n,char a,char b);
int count=0;
int main(void)
{
	int num;
	printf("请输入层数:");
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
	printf("第%d次移动：将%d从%c移动到%c\n",count,n,a,b);
 } 
