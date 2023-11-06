#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the value of a and b and c:");
	scanf("%d%d%d",&a,&b,&c);
	
	//a b c
	if(a<b)
	{
		//a c
		if(a<c)
		{
			//a 
			printf("a is min");
		}
		else
		{
			//c
			printf("c is min");
		}
	}
	else
	{
	    //b c
		if(b<c)
		{
			//b
			printf("b is min");
		}	
		else
		{
			//c
			printf("c is min");
		}
	}
}
