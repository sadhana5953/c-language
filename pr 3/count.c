#include<stdio.h>
main()
{
	//Write C program to count number of digits in a number.
	int n,a=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		a++;
	}
	printf("totle digit is:%d",a);
}