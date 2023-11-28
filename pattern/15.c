#include<stdio.h>
main()
{
	int i,j;
	   
//1
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1	   

   for(i=1;i<=5;i++)
   {
   	for(j=i;j>=1;j--)
   	{
   		if(j%2==0)
   		{
   			printf("0 ");
		   }
		   else
		   {
		   	printf("1 ");
		   }
	   }
	   printf("\n");
   }
}