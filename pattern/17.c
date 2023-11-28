#include<stdio.h>
main()
{
	int i,j;
	
//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1

    for(i=5;i>=1;i--)
    {
    	for(j=5;j>=i;j--)
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