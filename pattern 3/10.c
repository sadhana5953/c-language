#include<stdio.h>
main()
{
//1
//21
//321
//4321
//54321

	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}