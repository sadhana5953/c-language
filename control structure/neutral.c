#include<stdio.h>
main()
{
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("number is positive!");
	}
	else
	{
		if(a<0)
		{
		printf("number is nagative!");	
		}
		else
		{
			printf("number is neutral!");
		}
	}
}
