#include<stdio.h>
main()
{
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	
	int i,a[n];

	printf("\nenter array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	int *p=&a[n-1];
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*p);
		*p--;
	}
}
