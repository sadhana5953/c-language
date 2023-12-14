#include<stdio.h>
main()
{
//	4. Copy one string into another 
    char a[50],b[50];
    printf("enter your name:");
    scanf("%s",&a);
    int i,length;
    for(i=0;a[i]!=0;i++)
    {
    	length++;
	}
    for(i=0;i<length;i++)
    {
    	b[i]=a[i];
	}
	for(i=0;i<length;i++)
    {
    	printf("%c",b[i]);
	}
}
