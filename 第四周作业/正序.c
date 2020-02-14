#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int u=x;
	int mask=1;
	while(x>9){
		x/=10;
		mask*=10;
	}
	int b;
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
	return 0;	
 } 
