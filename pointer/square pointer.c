#include<stdio.h>
void square(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]*a[i];
	}
}
main()
{
	int n;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	square(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
