#include<stdio.h>
main()
{
//	5. WAP check string is numeric or not.
    char a[50];
    printf("enter your name:");
    scanf("%s",&a);
    int i,x=0,length;
    for(i=0;a[i]!=0;i++)
    {
    	length++;
	}
    for(i=0;i<length;i++)
    {
    	if(a[i]>=48&&a[i]<=57)
    	{
    		x=1;
		}
	}
	if(x==1)
	{
		printf("string is numberic");
	}
	else
	{
		printf("string is not numberic");
	}
}
