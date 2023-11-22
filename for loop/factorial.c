#include<stdio.h>
main()
{
	int n,sum=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(;n>=1;n--)
	{
		sum=sum*n;
	}
	printf("sum is:%d",sum);
}