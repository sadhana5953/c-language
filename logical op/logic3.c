#include<stdio.h>
main()
{
	int x=10,y=11;
	printf("%d",!(!((++x == y) && (x!=y)) ||!((x-- == y) && (y!=x))));
}
