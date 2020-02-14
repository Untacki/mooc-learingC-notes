#include<stdio.h>
void py(int a);

int main(void)
{
	int c;
	scanf("%d",&c);
	if(c>=0)
	{
		py(c);
	}
	else
	{
		printf("fu ");
		c=-c;
		py(c);
	 } 
	return 0;
}

void py(int a)
{
	int u=a;
	int mask=1;
	while(a>9){
		a/=10;
		mask*=10;
	}
	while(mask>0)
	{
		switch(u/mask)
     	{
     		case 0:printf("ling");
     		break;
     		case 1:printf("yi");
     		     		break;
     		case 2:printf("er");
     		     		break;
			case 3:printf("san");
			     		break;
			case 4:printf("si");
			     		break;
			case 5:printf("wu");
			     		break;
			case 6:printf("liu");
			     		break;
			case 7:printf("qi");
			     		break;
			case 8:printf("ba");
			     		break;
			case 9:printf("jiu");
		 }
		 u%=mask;
		 mask/=10;
		 if(mask>0)
		 {
		 	printf(" ");
		 }
	}
}
