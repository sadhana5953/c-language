#include<stdio.h>
main()
{
	//wap to check number is palindrom or not.
	int n,r;
	printf("enter the value of n:");
	scanf("%d",&n);
	int o=n;
	
	while(n!=0)
	{
		int n1=n%10;
		 r=r*10+n1;
		n=n/10;
	}
	printf("r:%d\n",r);
	
	if(o==r)
	{
		printf(" number is palindrom ");
	}
	else
	{
		printf(" number is not palindrom ");
	}
}
