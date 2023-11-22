#include<stdio.h>
main()
{
	int n,x=1,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	for(;x<=n;x++)
	{
		sum=sum+x;
	}
	printf("sum is:%d",sum);
}