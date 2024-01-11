//Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school

#include<stdio.h>
#include<string.h>
struct student
{
	int id,age,standard;
	char name[50],course[20],city[30],school[50];
};
main()
{	
    struct student s[3];
    char name[50],course[20],city[30],school[50];
    
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the detail of %d student:\n",i+1);
		printf("enter name :");
		scanf("%s",&s[i].name);
		printf("enter id :");
		scanf("%d",&s[i].id);
		printf("enter age :");
		scanf("%d",&s[i].age);
		printf("enter standard :");
		scanf("%d",&s[i].standard);
		printf("enter course :");
		scanf("%s",&s[i].course);
		printf("enter city :");
		scanf("%s",&s[i].city);
		printf("enter school :");
		scanf("%s",&s[i].school);
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		printf("the %d student detail given below :",i+1);
		printf("\n\nstudent name is : %s\n",s[i].name);
		printf("student id is : %d\n",s[i].id);
		printf("student age is : %d\n",s[i].age);
		printf("student standard is : %d\n",s[i].standard);
		printf("student course is : %s\n",s[i].course);
		printf("student city is : %s\n",s[i].city);
		printf("student school is : %s\n\n",s[i].school);
	}
	
}
