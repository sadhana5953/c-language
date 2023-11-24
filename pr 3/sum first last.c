#include<stdio.h>
main()
{
	// Write C program to find sum of first and last digit of a number.
	int n,a=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int ld=n%10;
	while(n>9)
	{
		n=n/10;
		a++;
	}
	printf("%d+%d=%d",n,ld,n+ld);
}