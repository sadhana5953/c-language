#include<stdio.h>
main()
{
	int salary,totle,hra,ta,da;
	printf("enter the salary:");
	scanf("%d",&salary);
	
	hra=salary*0.1;
	da=salary*0.05;
	ta=salary*0.08;
	totle=salary+hra+da+ta;
	printf("gross salary:%d",totle);
}
