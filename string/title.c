#include<stdio.h>
main()
{
	char a[50];
	printf("enter your name:");
	int i;
	for(i=0;i<100;i++)
	{
		scanf("%c",&a[i]);
		if(a[i-1]==' '&&a[i]>=97&&a[i]<=122||i==0&&a[i]>=97&&a[i]<=122)
		{
			printf("%c",a[i]-32);
		}
		else if(i!=0&&a[i-1]!=' '&&a[i]>=65&&a[i]<=90)
		{
			printf("%c",a[i]+32);
		}
		else
		{
			printf("%c",a[i]); 
		}
	}
}
