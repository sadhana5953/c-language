#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the a[%d]:",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum is:%d",sum);
}
