#include<stdio.h>
main()
{
	float per;
	printf("enter the percentage: ");
	scanf("%f",&per);
	
	if(per>=90)
	{
		printf("Grade-A");
	}
	else if(per<90&&per>=80)
	{
		printf("Grade-B");
	}
	else if(per<80&&per>=70)
	{
		printf("Grade-C");
	}
	else if(per<70&&per>=60)
	{
		printf("Grade-D");
	}
	else if(per<60&&per>=50)
	{
		printf("Grade-E");
	}
	else if(per<50&&per>=40)
	{
		printf("Grade-F");
	}
}
