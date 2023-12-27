#include<stdio.h>
//tsrs
int divide(int n)
{
	if(n%3==0&&n%5==0)
	{
		return 1;
	}
	else if(n%3==0)
	{
		return 2;
	}
	else if(n%5==0)
	{
		return 3;
	}
	else
	{
		return 0;
	}
}
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int x=divide(n);
	
	if(x==1)
	{
		printf("The given number is divisible by both 3 & 5.");
	}
	else if(x==2)
	{
		printf("The given number is divisible by 3.");
	}
	else if(x==3)
	{
		printf("The given number is divisible by 5.");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
	}
}
