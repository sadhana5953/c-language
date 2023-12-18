#include<stdio.h>
void sum()
{
	int a,b;
	char choice;
	
	while(1)
	{
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	
	printf("+\n");
	printf("-\n");
	printf("*\n");
	printf("/\n");
	printf("\nenter your choice:");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':printf("%d+%d=%d",a,b,a+b);
		break;
		case '-':printf("%d-%d=%d",a,b,a-b);
		break;
		case '*':printf("%d*%d=%d",a,b,a*b);
		break;
		case '/':printf("%d/%d=%d",a,b,a/b);
		break;
	}
	printf("\n\n");
	
	}
}
main()
{
	sum();
}