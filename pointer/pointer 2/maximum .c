#include<stdio.h>
void cube(int *a,int n,int *p)
{
	int i,j;

	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{
			if(*a>*p)
			{
				*p=*a;
			}
			*a++;
		}
	}
}
main()
{
	//wap to find maximum from array using pointer.
	int n,i,j;
	printf("enter the size of array :");
	scanf("%d",&n);
	
	int a[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d] :",i,j);
		    scanf("%d",&a[i][j]);
		}
	}
	
	int max=a[0][0];
	int *p=&max;
	
	cube(&a,n,p);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("%d ",a[i][j]);
		}
	}
	
	printf("\nmaximum value is : %d",max);
}
