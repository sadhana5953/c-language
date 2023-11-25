#include<stdio.h>
main()
{
	//wap to count digit of number. 
	int n,a=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n=n/10;
		a++;
	}
	printf("count:%d",a);
}

