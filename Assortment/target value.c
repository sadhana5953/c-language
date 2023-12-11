#include<stdio.h>
main()
{
	//6. Write a program in C to find a pair of target value given by user.
	int n,x;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("enter the value :");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==x)
			{
				printf("(%d,%d)=%d\n",a[i],a[j],x);
			}
		}
	}
}