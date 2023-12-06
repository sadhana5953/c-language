#include<stdio.h>
main()
{
	int a,b,i;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++)
	{
		if(i%4==0)
		{
			printf("%d ",i);
		}
	}
}
