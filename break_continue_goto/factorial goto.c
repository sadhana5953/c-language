#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int sum=1;
	x:
	if(n!=0)
	{
		sum=sum*n;
		n--;
		goto x;
	}
	printf("sum:%d",sum);
}