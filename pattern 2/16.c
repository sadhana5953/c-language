#include<stdio.h>
main()
{
	char i='A',j='E',k;
	for(i='A';i<='E';i++)
	{
		for(k='A';k<i;k++)
		{
			printf("  ");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
