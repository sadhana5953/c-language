#include<stdio.h>
main()
{
	int n,x;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
 	i=0;
	for(j=n-1;i<j;j--)
	{
		x=a[i];
		a[i]=a[j];
		a[j]=x;
		i++;
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]:%d\n",i,a[i]);
	}
}

