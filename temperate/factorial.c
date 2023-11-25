#include<stdio.h>
main()
{
	// wap to find factorial of 3 using while loop.
	int i,sum=1;
	for(i=3;i>=1;i--)
	{
		sum=sum*i;
	}
	printf("factorial:%d",sum);
}
