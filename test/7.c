#include<stdio.h>
main()
{
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	int o=n;
	int n1=n%10;
	n=n/10;
	int n2=n%10;
	n=n/10;
	int n3=n%10;
	n=n/10;
	int num=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
	printf("%d",num==o);
}
