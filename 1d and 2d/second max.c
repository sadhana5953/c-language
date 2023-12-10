#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	int a[n],i,j;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
		{
			max=a[i];
			a[i]=a[j];
			a[j]=max;
		}
		}
	}
	max=a[n-2];
	
		printf("second maximum number is : %d ",max);
		
}
