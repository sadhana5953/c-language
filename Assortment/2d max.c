#include<stdio.h>
main()
{
	int x,y;
	printf("enter the row of array:");
	scanf("%d",&x);
	printf("enter the column of array:");
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
	int max=a[0][0];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(a[i][j]>max)
		{
			max=a[i][j];
		}
		}
}
    printf("maximum value is:%d",max);
}
