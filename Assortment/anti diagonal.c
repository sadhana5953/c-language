#include<stdio.h>
main()
{
	//9. Wap to find sum of diagonal element in 2d array.
	int x,y,sum=0;
	printf("enter the size of array:");
	scanf("%d",&x);
	printf("enter the size of array:");
	scanf("%d",&y);
	
	int a[x][y],i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
	{
		printf("enter a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	j=y-1;
	for(i=0;i<x;i++)
	{
		sum=sum+a[i][j];
		j--;
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
	}
	printf("sum:%d",sum);
	
	
}
