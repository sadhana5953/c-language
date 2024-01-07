#include<stdio.h>
main()
{
	char a[50];
	printf("enter your name:");
	scanf("%s",&a);
	
	int length=strlen(a);
	char *p=&a[length-1];
	printf("\n");
	int i;
	for(i=0;i<length;i++)
	{
		printf("%c",*p);
		p--;
	}
}
