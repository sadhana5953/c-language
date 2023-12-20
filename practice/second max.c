#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	int length=0,i;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		length++;
	}
	
	int max=a[0],sm=0;
	for(i=0;i<length;i++)
	{
		if(a[i]>max)
		{
		    max=a[i];
		}
		
	}
	for(i=0;i<length;i++)
	{
		
		if(a[i]<max&&a[i]>sm)
		{
		    sm=a[i];
		}
	}
	
	printf("max:%d\n",max);
	printf("second max:%d",sm);
}
