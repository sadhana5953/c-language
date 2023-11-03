#include<stdio.h>
main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age>0)
	{
		if(age>100)
		{
			printf("enter valid age!");
		}
		else
		{
			printf("age is valid!");
		}
	}
	else
	{
		if(age<0)
		{
		printf("age is nagative!");	
		}
		else
		{
			printf("age is neutral!");
		}
	}
}
