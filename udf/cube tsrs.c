#include<stdio.h>
//tsrs
int cube(int n)
{
	int cube=n*n*n;
	return cube;
}
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	printf("cube is : %d",cube(n));
}
