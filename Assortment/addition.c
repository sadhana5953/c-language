#include<stdio.h>
main()
{
	int n,x;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i,j;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}
	
}
