#include<stdio.h>
main()
{
    float const pi=3.14;
	int r;
	printf("enter the value of r:");
	scanf("%d",&r);
	
	float area=pi*r*r;
	printf("area of circle is:%.2f",area);
}
