#include<stdio.h>
main()
{
	//1. WAP check string is palindrome or not.
	char a[50];
	printf("enter your name:");
	scanf("%s",&a);
	int i,x=0,length;
	for(i=0;a[i]!=0;i++)
	{
		length++;
	}
	
	int j=length-1;
	for(i=0;i<length;i++)
	{
		if(a[i]!=a[j])
		{
			x=1;
		}
		j--;
	}
	if(x==0)
	{
		printf("name is palindrom");
	}
	else
	{
		printf("name is not palindrom");
	}
}
