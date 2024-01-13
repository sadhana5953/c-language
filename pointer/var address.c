#include<stdio.h>
main()
{
	int n=10;
	
	int *x=&n;
	int **y=&x;
	int ***z=&y;
	int ****a=&z;
	
	printf("%d",****a);
}
