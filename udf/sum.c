#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return;
	}
	return n+sum(n-1);
}
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	printf("sum is : %d",sum(n));
}
