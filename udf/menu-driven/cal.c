#include<stdio.h>
void cal()
{
	int choice,a,b,x=1;
	start:
	while(x)
	{
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for the exit\n");
	
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	if(choice!=0)
	{
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	
	switch(choice)
	{
		case 1:printf("Addition of %d and %d is %d.\n\n",a,b,a+b);
		break;
		case 2:printf("substraction of %d and %d is %d.\n\n",a,b,a-b);
		break;
		case 3:printf("multiplication of %d and %d is %d.\n\n",a,b,a*b);
		break;
		case 4:printf("Division of %d and %d is %d.\n\n",a,b,a/b);
		break;
		case 5:printf("module of %d and %d is %d.\n\n",a,b,a%b);
		break;
	}
	}
	else
	{
	    x=0;
		goto start;
	}
}
}
main()
{
	cal();
}
