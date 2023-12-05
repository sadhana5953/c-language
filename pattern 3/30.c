#include<stdio.h>
main()
{
	char i='A',j='E';
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
