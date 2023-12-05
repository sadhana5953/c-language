#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the value a[%d]:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	printf("sum of array is :%d",sum);
	
}
