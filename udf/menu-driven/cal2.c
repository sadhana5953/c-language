#include<stdio.h>
int choose()
{
	start:
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for the exit\n");
	
	return choice();
}
int choice()
{
	int choice;
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	if(choice!=0)
	{
		return sum(choice);
	}
	else
	{
		return stop();
	}
}
int sum(int choice)
{
	int a,b;
	
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	
	return sum2(a,b,choice);
}
int sum2(int a,int b,int choice)
{
	
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
	return choose();
}
int stop()
{
	printf("break");
}
main()
{
	choose();
}
