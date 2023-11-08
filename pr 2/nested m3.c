#include<stdio.h>
main()
{
	//find max..from 3 num.. using nested
	int a,b,c;
	printf("enter the value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		//a c
		if(a>c)
		{
			//a
			printf("a is max!");
		}
		else
		{
			//c
			printf("c is max!");
		}
	}
	else
	{
		//b c
		if(b>c)
		{
			printf("b is max!");
		}
		else
		{
			printf("c is max!");
		}
	}
}
