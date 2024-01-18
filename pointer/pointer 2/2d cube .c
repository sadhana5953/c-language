#include<stdio.h>

void cube(int *a,int n)

{

	int i,j;



	for(i=0;i<n;i++)

	{

	

		for(j=0;j<n;j++)

		{

			*a=*a**a**a;

			*a++;

		}

	}

}

main()

{

	// Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

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

	

	cube(a,n);

	

	for(i=0;i<n;i++)

	{

		for(j=0;j<n;j++)

		{

		    printf("%d ",a[i][j]);

		}

	}

}
