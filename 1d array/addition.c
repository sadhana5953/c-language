#include<stdio.h>
main()
{
	int n,i;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter the value a[%d]:",i);
		scanf("%d",&a[i]);
		printf("enter the value b[%d]:",i);
		scanf("%d",&b[i]);
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("c[%d]:%d\n",i,c[i]);
	}
	
}
