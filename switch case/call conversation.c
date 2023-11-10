#include<stdio.h>

main()
{
	int choice;
	printf("welcome to abc shop!\n\n");
	printf("what  would you like to eat!\n");
	printf("1.sweet\n");
	printf("2.snacks\n");
	printf("3.junkfood\n");
	printf("\n enetr your choice:\n\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
	    	printf("welcome to sweet shop!\n\n");
	    	printf("which sweet do you want?\n");
			printf("1.milkcake\n");
        	printf("2.barfi\n");
        	printf("3.gulabjabun\n");
        	printf("\n enetr your choice:\n");
         	scanf("%d",&choice);
         	
         	switch(choice)
         	{
         		case 1:
         			printf("you purchace milkcake!");
         			break;
         		case 2:
         			printf("you purchace barfi!");
         			break;
         		case 3:
         			printf("you purchace gulabjabun!");
         			break;
				default:
					printf("wrong choice!");
					break;
		    }
		    break;
					
		case 2:
	    	printf("welcome to snacks shop!\n\n");
	    	printf("which snacks do you want?\n");
			printf("1.kurkure\n");
        	printf("2.pudding\n");
        	printf("3.doracake\n");
        	printf("\n enetr your choice:\n");
         	scanf("%d",&choice);
         	
         	switch(choice)
         	{
         		case 1:
         			printf("you purchace kurkure!");
         			break;
         		case 2:
         			printf("you purchace pudding!");
         			break;
         		case 3:
         			printf("you purchace doracake!");
         			break;
				default:
					printf("wrong choice!");
					break;
         			
			}
			break;
			
		case 3:
	    	printf("welcome to junkfood shop!\n\n");
	    	printf("which sweet do you want?\n");
			printf("1.pizza\n");
        	printf("2.sandwich\n");
        	printf("3.panipuri\n");
        	printf("\n enetr your choice:\n");
         	scanf("%d",&choice);
         	
         	switch(choice)
         	{
         		case 1:
         			printf("you purchace pizza!");
         			break;
         		case 2:
         			printf("you purchace sandwich!");
         			break;
         		case 3:
         			printf("you purchace panipuri!");
         			break;
				default:
					printf("wrong choice!");
					break;
	       }
	       break;
	       
	}
}

