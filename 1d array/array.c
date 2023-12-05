#include<stdio.h>
main()
{
	int n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("enter the value a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("b[%d]:%d\n",i,b[i]);
	}
	
	
}
