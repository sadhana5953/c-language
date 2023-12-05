#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=i;k<5;k++)
		{
			printf(" ");
		}
		for(j=1;j<=7;j++)
		{
			if(j=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
	}
}