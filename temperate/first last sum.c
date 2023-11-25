#include<stdio.h>
main()
{
	//wap to find sum of first and last digit of number.
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int ld=n%10;
	
	while(n>9)
	{
		n=n/10;
	}
	printf("%d+%d=%d",n,ld,n+ld);
}

