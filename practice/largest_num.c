#include<stdio.h>
main()
{
	//find largest number among three number
	int a,b,c;
	printf("enter the value of a and b and c:");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("a:%d\n",(a>b&&a>c));
	printf("b:%d\n",(b>c&&b>a));
	printf("c:%d\n",(c>a&&c>b));
}
