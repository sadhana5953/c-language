#include<stdio.h>
main()
{
//5
//54
//543
//5432
//54321

	int i,j;
	for(i=5;i>=1;i--)
    {
	for(j=5;j>=i;j--)
	{
	    printf("%d",j);
	}
	printf("\n");
    }
}