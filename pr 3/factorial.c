#include<stdio.h>
main()
{
	//Write C program to calculate factorial of a number.

	int n,sum=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(;n>=1;n--)
	{
		sum=sum*n;
	}
	printf("factorial:%d",sum);
}