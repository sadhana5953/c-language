#include<stdio.h>
struct result
{
	int roll_no;
	float chem,math,phy;
	char name[50];
}
main()
{
	struct result stu[5];
	float a[5],totle[5];
	char name[50];
	
	int i;
	float mark,result;
	for(i=0;i<5;i++)
	{
		printf("\nenter %d student detail :-\n",i+1);
		printf("Name : ");
		scanf(" %[^\n]s",stu[i].name);
		printf("Roll No :");
		scanf("%d",&stu[i].roll_no);
		printf("Chemistry :");
		scanf("%f",&stu[i].chem);
		printf("Mathematics :");
		scanf("%f",&stu[i].math);
		printf("Physics :");
		scanf("%f",&stu[i].phy);
		
		mark=stu[i].chem+stu[i].math+stu[i].phy;
		totle[i]=mark;
		result=mark/300.00*(100.00);
		a[i]=result;
	}
	
	for(i=0;i<5;i++)
	{
		printf("\n\n%d student marks detail :-\n",i+1);
		printf("%s (%d)\n",stu[i].name,stu[i].roll_no);
		printf("Chemistry : %.0f\n",stu[i].chem);
		printf("Mathematics : %.0f\n",stu[i].math);
		printf("Physics : %.0f\n",stu[i].phy);
		printf("Totle :%.0f/300\n",totle[i]);
		printf("Percent : %.2f%%\n",a[i]);
	}
}
