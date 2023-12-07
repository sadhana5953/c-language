#include<stdio.h>
main()
{
	int i,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("enter the a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		printf("a[%d]:%d \n",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("b[%d]:%d \n",i,a[i]);
	}
}
