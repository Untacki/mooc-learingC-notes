#include<stdio.h>
#include<stdlib.h>
int main(void)
{
//    void *p;
//    int cot=0;
//    while(p=malloc(100*1024*1024))
//     cot++;
//     printf("分配了%d00MB的空间\n",cot);
char *p;
while (1) {
    p = malloc(1);
    //free(p);
	*p = 0;
     
}
	return 0;
 } 
