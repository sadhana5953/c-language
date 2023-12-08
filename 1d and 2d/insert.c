#include<stdio.h>
main()
{
	int n,x;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("enter the value:");
	scanf("%d",&x);
	
	a[n]=x;
	for(i=0;i<=n;i++)
	{
			printf("%d ",a[i]);
	}
}