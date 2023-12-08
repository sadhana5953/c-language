#include<stdio.h>
main()
{
	int x,y,i,j;
	float sum=0;
	printf("enter the row of array:");
	scanf("%d",&x);
	printf("enter the column of array:");
	scanf("%d",&y);
	int c=x*y;
	int a[x][y];
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("enter the a[%d][%d]:",i,j);
	        scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("average is:%.2f",sum/c);
}