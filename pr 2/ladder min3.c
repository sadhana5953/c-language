#include<stdio.h>
main()
{
	//find min..from 3 num.. using ladder
	int a,b,c;
	printf("enter the value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b&&a<c)
	{
		printf("a is min");
	}
	else if(b<c)
	{
		printf("b is min");
	}
	else
	{
		printf("c is min");
	}
}
