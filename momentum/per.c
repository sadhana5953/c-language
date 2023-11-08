#include<stdio.h>
main()
{
	float physics, chemistry, biology, mathematics, computer;
	
	printf("Enter marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks in Biology: ");
    scanf("%f", &biology);

    printf("Enter marks in Mathematics: ");
    scanf("%f", &mathematics);

    printf("Enter marks in Computer: ");
    scanf("%f", &computer);
    
    float totle=physics+chemistry+biology+mathematics+computer;
    float per=(totle/500)*100;
    printf("%.2f\n",per);
    
    if(per>=90)
	{
		printf("Grade-A");
	}
	else if(per<90&&per>=80)
	{
		printf("Grade-B");
	}
	else if(per<80&&per>=70)
	{
		printf("Grade-C");
	}
	else if(per<70&&per>=60)
	{
		printf("Grade-D");
	}
	else if(per<60&&per>=50)
	{
		printf("Grade-E");
	}
	else if(per<50&&per>=40)
	{
		printf("Grade-F");
	}
	
	
}
