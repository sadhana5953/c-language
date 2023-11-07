#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int x=n/2;
	int ans=x*2;
	printf("%d",ans==n);
}
