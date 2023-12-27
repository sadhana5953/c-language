#include<stdio.h>
//tnrs
int cube()
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	int cube=n*n*n;
	
	return cube;
}
main()
{
	int Cube=cube();
	printf("cube is : %d",Cube);
}
