#include<stdio.h>
int main(void)
{
	const int size=3;
    int board[size][size];
    int i,j;
    int numofx;
    int numofo;
    int result=-1;//-1:平手  1：x赢 0：o赢
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&board[i][j]);
		}
	 } 
    //检查行
    if(result==-1)
	{
	for(i=0;i<size&&result==-1;i++)
	{
		numofx=numofo=0;
		for(j=0;j<size;j++)
		{
			if(board[i][j]==1)
			{
				numofx++;
			}
			else{
				numofo++;
			}
		}
	 
	  	if(numofx==size)
		{
			result=1;
			break;
		}
		else if(numofo==size){
		result=0;
	    break;
		}
   }
   }
	 //检查列 
	 if(result==-1)
	 {
		 for(j=0;j<size&&result==-1;j++)
	 	{
	 		 numofx=numofo=0;
			 for(i=0;i<size;i++)
	 		{
	 			if(board[i][j]==1)
	 			{
	 				numofx++;
				 }
				 else{
				 	numofo++;
				 }
			 }
		if(numofx==size)
			 {
			 result=1;
			 break;
			 }
			 else if(numofo==size)
			 {
			 result=0;
		     break;
			}
	 }
    }
	 //检查对角线
	 if(result==-1)
	 {
	 	numofx=numofo=0;
	    for(i=0;i<size;i++)
		{
			if(board[i][i]==1)
			{
				numofx++;
			}
			else{
				numofo++;
			}
		 }
		 if(numofx==size)
		 {
		 	result=1;
		  }
		  else if(numofo==size)
		  {
		  	result=0;
		   } 
	 }
	 //检查反对角线
	 if(result==-1)
	 {
	 	numofx=numofo=0;
	 	for(i=0;i<size;i++)
	 	{
	 		if(board[i][size-i-1]==1)
	 		{
	 			numofx++;
			 }
			 else if(board[i][size-i-1]==0)
			 {
			 	numofo++;
			 }
		 }
		  if(numofx==size)
			 {
			 	result=1;
			 }
			 else if(numofo==size)
			 {
			 	result=0;
			 }
	  }
	  switch(result)
	  {
	  	case 1:printf("X胜利\n");
	  	break;
		case 0:printf("O胜利\n");
		break;
		default:printf("平手\n"); 
	   } 
	  return 0;
	  
}
