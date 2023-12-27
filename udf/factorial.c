#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	return n*factorial(n-1);
}
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	printf("factorial is : %d",factorial(n));
}
