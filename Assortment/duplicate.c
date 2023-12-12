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
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[i]=0;
				x++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\nduplicate value is:%d",x);
}
