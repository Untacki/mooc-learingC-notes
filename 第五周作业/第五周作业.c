#include<stdio.h>
int main(void)
{
    int a,b;
    scanf("%d/%d",&a,&b);
    printf("0.");
    int i=0;
    for(;i<200;)
    {	 	
	    printf("%d",(10*a)/b);
		a=(a*10)%b;
        if(a==0)
		{

			break;
		}
	
		i++;
   }
   	printf("\n");		
	return 0;
} 
