#include<stdio.h>
void value_change(int *n)
{
	*n=*n+8;
}
main()
{
	//wap to change value by passing address of variable in udf.
	
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	value_change(&n);
	
	printf("value of n is %d .",n);
}
