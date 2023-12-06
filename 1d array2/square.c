#include<stdio.h>
main()
{
	int n,i;
	printf("enterv the size of array:");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
		printf("%d ",a[i]);
	}
}