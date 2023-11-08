#include<stdio.h>
main()
{
	//find min..from 3 num.. using nested
	int a,b,c;
	printf("enter the value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<b)
	{
		//a c
		if(a<c)
		{
			//a
			printf("a is min!");
		}
		else
		{
			//c
			printf("c is min!");
		}
	}
	else
	{
		//b c
		if(b<c)
		{
			printf("b is min!");
		}
		else
		{
			printf("c is min!");
		}
	}
}
