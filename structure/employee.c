//Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_city
//- emp_experience
//- emp_company_name

#include<stdio.h>
#include<string.h>
struct Employee
{
	int id,age,experience;
	char name[50],role[20],city[30],company_name[50];
};
main()
{	
    int n;
    printf("enter the value of employee :");
    scanf("%d",&n);
    
    struct Employee emp[n];
    char name[50],role[20],city[30],company_name[50];
    
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the detail of %d employee:\n",i+1);
		printf("enter the employee name :");
		scanf(" %[^\n]s",&emp[i].name);
		printf("enter id :");
		scanf("%d",&emp[i].id);
		printf("enter age :");
		scanf("%d",&emp[i].age);
		printf("enter the experience of employee :");
		scanf("%d",&emp[i].experience);
		printf("enter role of employee:");
		scanf(" %[^\n]s",&emp[i].role);
		printf("enter city :");
		scanf(" %[^\n]s",&emp[i].city);
		printf("enter company name :");
		scanf(" %[^\n]s",&emp[i].company_name);
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("Detail of %d employee",i+1);
		printf("\n\nName : %s\n",emp[i].name);
		printf("Id: %d\n",emp[i].id);
		printf("Age : %d\n",emp[i].age);
		printf("experience : %d\n",emp[i].experience);
		printf("role : %s\n",emp[i].role);
		printf("City : %s\n",emp[i].city);
		printf("Company Name : %s\n\n",emp[i].company_name);
	}
	
}

