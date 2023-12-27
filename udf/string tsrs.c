#include<stdio.h>
//tsrs
int string(a)
{	
	int length=strlen(a);
	return length;
}
main()
{
	int a[50];
	printf("enter your name :");
	gets(a);
	
	int length=string(a);
	
	printf("length is : %d",length);
}
