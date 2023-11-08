#include<stdio.h>
main()
{
	//wap to make votter registration system.
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age<18)
		{
			printf("not valid age for votting");
		}
		else
		{
			printf("valid age for votting");
		}
	}
	else
	{
		if(age<0)
		{
			printf("age is nagative");
		}
		else
		{
			printf("age is nuetral");
		}
	}
}
