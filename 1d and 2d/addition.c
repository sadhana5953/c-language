#include<stdio.h>
main()
{
	int x,y;
	printf("enter the row of array:");
	scanf("%d",&x);
	printf("enter the column of array:");
	scanf("%d",&y);
	
	int a[x][y],b[x][y],c[x][y];
	
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
		    printf("enter a[%d][%d]:",i,j);
	        scanf("%d",&a[i][j]);
			printf("enter b[%d][%d]:",i,j);
	        scanf("%d",&b[i][j]);	
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
	        printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
