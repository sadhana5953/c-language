#include<stdio.h>
main()
{
	int n,i,j,sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the value a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
	
	printf("average of array is :%d",sum/n);
	
}
