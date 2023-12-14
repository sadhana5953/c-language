#include<stdio.h>
main()
{
	//1. WAP check string is palindrome or not.
	char a[50],b[50];
	printf("enter your name1:");
	scanf("%s",&a);
	printf("enter your name2:");
	scanf("%s",&b);
	int i,x=0,length;
	for(i=0;a[i]!=0;i++)
	{
		length++;
	}
	
	for(i=0;i<length;i++)
	{
		if(a[i]!=b[i])
		{
			x=1;
		}
	
	}
	if(x==0)
	{
		printf("name is same");
	}
	else
	{
		printf("name is not same");
	}
}
