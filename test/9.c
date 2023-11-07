#include<stdio.h>
main()
{
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	
	printf("%d",year%4==0);
}
