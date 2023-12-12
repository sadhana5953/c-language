#include<stdio.h>
main()
{
	char a[100];
	printf("enter your name:");
	scanf("%s",&a);
	
	int length,i;
	for(i=0;a[i]!=0;i++)
	{
		length++;
	}
	
	for(i=0;i<length;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			printf("%c",a[i]-32);
		}
		else
		{
			printf("%c",a[i]);
		}
	}
}
