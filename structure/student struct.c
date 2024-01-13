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
		scanf(" %[^\n]s",&s[i].name);
		printf("enter id :");
		scanf("%d",&s[i].id);
		printf("enter age :");
		scanf("%d",&s[i].age);
		printf("enter standard :");
		scanf("%d",&s[i].standard);
		printf("enter course :");
		scanf(" %[^\n]s",&s[i].course);
		printf("enter city :");
		scanf(" %[^\n]s",&s[i].city);
		printf("enter school :");
		scanf(" %[^\n]s",&s[i].school);
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		printf("student no : %d",i+1);
		printf("\n\nName : %s\n",s[i].name);
		printf("Id: %d\n",s[i].id);
		printf("Age : %d\n",s[i].age);
		printf("Standard : %d\n",s[i].standard);
		printf("Course : %s\n",s[i].course);
		printf("City : %s\n",s[i].city);
		printf("School Name : %s\n\n",s[i].school);
	}
	
}
