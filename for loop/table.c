#include<stdio.h>
main()
{
	int n,x=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(;x<=10;x++)
	{
		printf("%d*%d=%d\n",n,x,n*x);
	}
}