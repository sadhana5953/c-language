#include<stdio.h>
main()
{
	int x=10,y=11;
	printf("%d",!(!(x>=10 || x<=y)||(x>0)) || (x!=y)&&!(y!=0 || y>10));
}
