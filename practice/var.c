#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("a:%d\n",a);
	printf("b:%d\n",b);
}