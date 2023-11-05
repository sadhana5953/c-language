#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value of a and b and c and d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("%d\n",(a>b&&a>c&&a>d));
	printf("%d\n",(b>c&&b>d&&b>a));
	printf("%d\n",(c>d&&c>a&&c>b));
	printf("%d\n",(d>a&&d>b&&d>c));

}
