#include<stdio.h>
main()
{
	int n,o,r=0,n1;
	printf("enter the value of n:");
	scanf("%d",&n);
	o=n;
	
	n1=n%10;
	r=r*10+n1;
	n=n/10;
	n1=n%10;
	r=r*10+n1;
	n=n/10;
	n1=n%10;
	r=r*10+n1;
	n=n/10;
	
	printf("%d",(o==r));
}
