#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter the value of a and b and c and d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("a:%d\n",(a<b&&a<c&&a<d));
	printf("b:%d\n",(b<c&&b<d&&b<a));
	printf("c:%d\n",(c<d&&c<a&&c<b));
	printf("d:%d\n",(d<a&&d<b&&d<c));

}
