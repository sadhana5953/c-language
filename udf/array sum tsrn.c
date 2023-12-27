#include<stdio.h>
//tsrn
int array(int a[],int n)
{
     int i,sum=0;
	for(i=0;i<n;i++)
	{
	 	printf("enter a[%d]:",i);
	 	scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
	 	sum=sum+a[i];
	}	
		 
	printf("sum is : %d",sum);
}
main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int a[n];
	array(a,n);
	
}
