#include<stdio.h>
//tsrn
void cube(int n)
{
	int cube=n*n*n;
	printf("cube is : %d",cube);
}
main()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	cube(n);
}
