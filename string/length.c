#include<stdio.h>
main()
{
	char a[100];
	printf("enter your name:");
	scanf("%s",&a);
	
	int i,length=0;
	for(i=0;a[i]!=0;i++)
	{
		length++;
	}
	printf("string length is : %d",length);
}
