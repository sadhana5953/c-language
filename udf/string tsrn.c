#include<stdio.h>
//tsrn
void string(a)
{	
	int length=strlen(a);
	printf("length is : %d",length);
}
main()
{
	int a[50];
	printf("enter your name :");
	gets(a);
	
	string(a);
}
