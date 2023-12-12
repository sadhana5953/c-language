#include<stdio.h>
main()
{
	char a[100];
	printf("enter your name:");
	scanf("%s",&a);
	int i,length;
	for(i=0;a[i]!=0;i++)
	{
		length++;
	}
	
	for(i=0;i<length;i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			printf("%c",a[i]+32);
		}
		else
		{
			printf("%c",a[i]);
		}
	}
}

