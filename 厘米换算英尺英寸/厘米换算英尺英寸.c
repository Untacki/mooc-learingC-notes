#include<stdio.h>
int main(void)
{
	int cm;
	scanf("%d",&cm);
	int foot=(int)(cm/30.48);
	int inch=12*(cm/30.48-foot);
	printf("%d %d",foot,inch);
	return 0;
}
