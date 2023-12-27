#include<stdio.h>
//tsrn
void divide(int n)
{
	if(n%3==0&&n%5==0)
	{
		printf("The given number is divisible by both 3 & 5.");
	}
	else if(n%3==0)
	{
		printf("The given number is divisible by 3.");
	}
	else if(n%5==0)
	{
		printf("The given number is divisible by 5.");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
	}
}
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	divide(n);
}
