#include<stdio.h>
main()
{
	int start,end;
	printf("enter starting year:\n");
	scanf("%d",&start);
	printf("enter ending year:\n");
	scanf("%d",&end);
	printf("\ntotle year:%d",(end-start)/4+1);
}
