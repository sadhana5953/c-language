#include<stdio.h>
main()
{
	int choice;
	printf("Welcome to our shop! \n");
	printf("choose your language!\n");
	printf("1.Hindi\n");
	printf("2.English\n");
	printf("enter your choice\n\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("me aapki kya madad kar sakati hu?\n");
		printf("1.agar koi shikayat ho to 9821002984 number pe call kare\n");
		printf("2.agar order dena ho to 6745980176 number pe call kare\n");
		printf("enter your choice\n\n");
	    scanf("%d",&choice);
	    
	    switch(choice)
	    {
	    	case 1:printf("aapki shikayat par kam kiya jayega\n");
	    	break;
	    	case 2:printf("aapka order confirm hua");
	    	break;
		}
	    
	    break;
	    case 2:
	    printf("how can i help you?\n");
	    printf("1.if you have any problem contact 9821002984 this number\n");
	    printf("2.if you want to order something 6745980176 contact this number\n");
	    printf("enter your choice\n\n");
	    scanf("%d",&choice);
	    
	    switch(choice)
	    {
	    	case 1:printf("working on your problem\n");
	    	break;
	    	case 2:printf("your order is confirm");
	    	break;
		}
	}
}
