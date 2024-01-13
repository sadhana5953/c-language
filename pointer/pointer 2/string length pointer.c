#include<stdio.h>
void length(int *p,char *a)
{
	 *p=strlen(a);
}
main()
{
	//Write a Program to find the length of a string using a Pointer.
	char a[50];
	printf("enter your name :");
	gets(a);
	int *p=&a;
	length(p,a);
	int length=*p;
	printf("length is : %d",length);
}
